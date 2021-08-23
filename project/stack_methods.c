/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:47:13 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/23 22:03:26 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_stack	*new_point(int z, int color)
{
	t_stack	*point;

	point = (t_stack *)malloc(sizeof(t_stack));
	if (!point)
		raise_error("Error");
	point->z = z;
	point->color = color;
	point->next = NULL;
	return (point);
}

void	push_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

t_stack	*pop(t_stack **queue)
{
	t_stack	*help;

	help = NULL;
	if (*queue && queue)
	{
		help = *queue;
		*queue = help->next;
	}
	return (help);
}
