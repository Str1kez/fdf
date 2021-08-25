/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:02:24 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/25 19:25:57 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	get_default_color(t_field *field, int z)
{
	double	percent;

	percent = get_percent(field->min_z, field->max_z, z);
	if (percent < 0.3)
		return (0xDFFF00);
	if (percent < 0.6)
		return (0xFF7F50);
	return (0xDE3163);
}

t_point	get_point(t_field *field, int x, int y)
{
	t_point	point;
	int		pos;

	pos = x + (field->horizontal * y);
	point.x = x;
	point.y = y;
	point.z = field->coords[pos];
	point.color = field->colors[pos];
	if (point.color == -1)
		point.color = get_default_color(field, point.z);
	return (point);
}
