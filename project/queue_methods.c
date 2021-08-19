/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:48:02 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/19 21:17:51 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	clean_queue(t_point **queue)
{
	t_point	*help;

	if (!queue || !*queue)
		return ;
	while (*queue)
	{
		help = *queue;
		*queue = help->next;
		free(help);
	}
}

t_point	*new_point(int x, int y, int z, int color)
{
	t_point	*point;

	point = (t_point *)malloc(sizeof(t_point));
	if (!point)
		raise_error("Error");
	point->x = x;
	point->y = y;
	point->z = z;
	point->color = color;
	point->next = NULL;
	return (point);
}

void	push_back(t_point **lst, t_point *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
	{
		lst = &((*lst)->next);
	}
	(*lst)->next = new;
}
