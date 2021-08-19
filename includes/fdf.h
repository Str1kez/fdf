/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:52:59 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/19 21:51:55 by tnessrou         ###   ########.fr       */
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
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_vars;

typedef struct s_point
{
	int				x;
	int				y;
	int				z;
	int				color;
	struct s_point	*next;
}				t_point;

typedef struct s_field
{
	int		horizontal;
	int		vertical;
	int		max_z;
	int		min_z;
	int		avg_z;
	t_point	*point_queue;
}				t_field;

void	my_put_pixel(t_vars *vars, int x, int y, int color);
void	draw_line(t_vars *vars, t_point p1, t_point p2);
void	raise_error(const char *str);
int		ft_isnum(const char *s, int base);
int		ft_atoi_16(const char *s);
t_point	*new_point(int x, int y, int z, int color);
void	clean_queue(t_point **queue);
void	push_back(t_point **lst, t_point *new);
void	init_field(t_field *field);
void	init_vars(t_vars *vars);
int		parse_field(const int fd, t_field *field);

#endif
