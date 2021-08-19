/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializators.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:34:31 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/19 21:52:22 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdlib.h>

void	init_field(t_field *field)
{
	field->horizontal = 0;
	field->vertical = 0;
	field->max_z = 0;
	field->min_z = 0;
	field->avg_z = 0;
	field->point_queue = NULL;
}

void	init_vars(t_vars *vars)
{
	vars->mlx = mlx_init();
	vars->win = mlx_new_window(vars->mlx, 1920, 1080, "fdf");
	vars->img = mlx_new_image(vars->mlx, 1920, 1080);
	vars->addr = mlx_get_data_addr(vars->img, &vars->bits_per_pixel,
			&vars->line_length, &vars->endian);
}
