/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:02:50 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/18 19:08:06 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static double	get_percent(int begin, int end, int temp)
{
	double	first;
	double	second;

	first = temp - begin;
	second = end - temp;
	if (second == temp)
		return (1.0);
	return (first / second);
}

static int	get_shade(int begin, int end, double division)
{
	return ((1 - division) * begin + division * end);
}

static int	get_gradient(t_point begin, t_point end,
						 t_point temp, t_point delta)
{
	int		r;
	int		g;
	int		b;
	double	division;

	if (temp.color == end.color)
		return (end.color);
	if (delta.x > delta.y)
		division = get_percent(begin.x, end.x, temp.x);
	else
		division = get_percent(begin.y, end.y, temp.y);
	r = get_shade((begin.color >> 16) & 255, (end.color >> 16) & 255, division);
	g = get_shade((begin.color >> 8) & 255, (end.color >> 8) & 255, division);
	b = get_shade((begin.color) & 255, (end.color) & 255, division);
	return ((r << 16) | (g << 8) | b);
}

static	void	inc_iter(t_point *iter, t_point direction,
							int *error, t_point delta)
{
	int	deltaerr;

	deltaerr = *error * 2;
	if (deltaerr > -delta.y)
	{
		*error -= delta.y;
		iter->x += direction.x;
	}
	if (deltaerr < delta.x)
	{
		*error += delta.x;
		iter->y += direction.y;
	}
}

void	draw_line(t_data *img, t_point p1, t_point p2)
{
	t_point	delta;
	t_point	direction;
	t_point	iter;
	int		error;

	delta.x = abs(p2.x - p1.x);
	delta.y = abs(p2.y - p1.y);
	direction.x = (p2.x > p1.x) * 2 - 1;
	direction.y = (p2.y > p1.y) * 2 - 1;
	error = delta.x - delta.y;
	iter = p1;
	while (iter.x != p2.x || iter.y != p2.y)
	{
		my_put_pixel(img, iter.x, iter.y, get_gradient(p1, p2, iter, delta));
		inc_iter(&iter, direction, &error, delta);
	}
}
