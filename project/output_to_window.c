/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_to_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:15:53 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/23 22:03:09 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static double	my_min(double num, double div)
{
	if (num < div)
		return (num);
	return (div);
}

static void	prepare_iso(t_point *p)
{
	int	save_x;
	int	save_y;

	save_x = p->x;
	save_y = p->y;
	p->x = (save_x - save_y) * cos(0.523599);
	p->y = -p->z + (save_x + save_y) * sin(0.523599);
}

static void	prepare_scale(t_point *p, t_field *field)
{
	double	scale;

	scale = my_min(1920 / field->horizontal / 2, 1080 / field->vertical / 2);
	p->x *= scale;
	p->y *= scale;
	p->z *= scale;
	p->x -= field->horizontal * scale / 2;
	p->y -= field->vertical * scale / 2;
	prepare_iso(p);
	p->x += 1920 / 2;
	p->y += (1080 + field->vertical * scale) / 2;
}

static void	prepare_draw(t_vars *vars, t_point p1, t_point p2, t_field *field)
{
	prepare_scale(&p1, field);
	prepare_scale(&p2, field);
	draw_line(vars, p1, p2);
}

void	output_to_window(t_field *field, t_vars *vars)
{
	int	x;
	int	y;

	y = 0;
	while (y < field->vertical)
	{
		x = 0;
		while (x < field->horizontal)
		{
			if ((x + 1) != field->horizontal)
				prepare_draw(vars, get_point(field, x, y),
					get_point(field, x + 1, y), field);
			if ((y + 1) != field->vertical)
				prepare_draw(vars, get_point(field, x, y),
					get_point(field, x, y + 1), field);
			x++;
		}
		y++;
	}
}
