/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   migrate_to_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:13:28 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/23 22:03:41 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	paste_to_arr(t_field *field, t_stack **stack, size_t size)
{
	t_stack	*origin;

	origin = pop(stack);
	while ((--size >= 0) && origin)
	{
		field->coords[size] = origin->z;
		field->colors[size] = origin->color;
		if (field->max_z < origin->z)
			field->max_z = origin->z;
		if (field->min_z > origin->z)
			field->min_z = origin->z;
		free(origin);
		origin = pop(stack);
	}
	field->avg_z = field->max_z - field->min_z;
}

void	migrate_to_arr(t_field *field, t_stack **stack)
{
	size_t	size;

	size = field->horizontal * field->vertical;
	field->coords = (int *)(malloc(size * sizeof(int)));
	if (!field->coords)
		raise_error("Error in malloc");
	field->colors = (int *)(malloc(size * sizeof(int)));
	if (!field->coords)
		raise_error("Error in malloc");
	paste_to_arr(field, stack, size);
}
