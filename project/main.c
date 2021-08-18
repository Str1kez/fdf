/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:10:11 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/18 19:10:13 by tnessrou         ###   ########.fr       */
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
	t_data	img;
	t_point	p1;
	t_point	p2;
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "fdf");
	img.img = mlx_new_image(vars.mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
			&img.line_length, &img.endian);
	p1.x = 300;
	p1.y = 100;
	p1.color = 0x00FF0000;
	p2.x = 600;
	p2.y = 1000;
	p2.color = 0x0000FF00;
	// draw_line(mlx, mlx_win, p1, p2);
	// for (int i = 400; i < 600; i++)
	// 	for (int j = 100 + i - 400 ; j < 600 - i + 300; j++)
	// 		mlx_p_p(&img, j, i, 0x00FF0000);
			// mlx_pixel_put(vars.mlx, vars.win, j, i, 0x00FF0000);
	draw_line(&img, p1, p2);
	mlx_put_image_to_window(vars.mlx, vars.win, img.img, 0, 0);
	mlx_key_hook(vars.win, esc_interrupt, &vars);
	mlx_loop(vars.mlx);
}
