/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:52:59 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/18 19:05:19 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include <stdlib.h>
# include <unistd.h>
// # include <stdio.h>
# include <math.h>

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct s_point
{
	int	x;
	int	y;
	int	color;
}				t_point;

void	my_put_pixel(t_data *data, int x, int y, int color);
void	draw_line(t_data *img, t_point p1, t_point p2);

#endif
