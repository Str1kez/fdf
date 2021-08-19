/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:10:11 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/19 20:25:21 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	esc_interrupt(int keycode)
{
	if (keycode == 53)
		exit(0);
	return (0);
}

int	main(void)
{
	t_point	p1;
	t_point	p2;
	t_vars	vars;
	t_field	field;

	init_vars(&vars);
	init_field(&field);
	p1.x = 300;
	p1.y = 100;
	p1.color = 0x00FF0000;
	p2.x = 600;
	p2.y = 1000;
	p2.color = 0x0000FF00;
	draw_line(&vars, p1, p2);
	mlx_put_image_to_window(vars.mlx, vars.win, vars.img, 0, 0);
	mlx_key_hook(vars.win, esc_interrupt, &vars);
	mlx_loop(vars.mlx);
}
