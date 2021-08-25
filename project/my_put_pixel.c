/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:06:09 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/25 21:40:14 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	my_put_pixel(t_vars *vars, int x, int y, int color)
{
	char	*dist;

	if (x >= 0 && x < 1920 && y >= 0 && y < 1080)
	{
		dist = vars->addr
			+ (y * vars->line_length + x * vars->bits_per_pixel / 8);
		*dist = color;
		*(dist + 1) = color >> 8;
		*(dist + 2) = color >> 16;
	}
}
