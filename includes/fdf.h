/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:52:59 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/25 21:27:38 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include <stdlib.h>
# include <unistd.h>
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

typedef struct s_stack
{
	int				z;
	int				color;
	struct s_stack	*next;
}				t_stack;

typedef struct s_point
{
	int	x;
	int	y;
	int	z;
	int	color;
}				t_point;

typedef struct s_field
{
	int		horizontal;
	int		vertical;
	int		max_z;
	int		min_z;
	int		avg_z;
	int		*coords;
	int		*colors;
}				t_field;

void	my_put_pixel(t_vars *vars, int x, int y, int color);
void	draw_line(t_vars *vars, t_point p1, t_point p2);
void	output_to_window(t_field *field, t_vars *vars);
t_point	get_point(t_field *field, int x, int y);
void	raise_error(char *str);
int		ft_isnum(const char *s, int base);
int		ft_atoi_16(const char *s);
t_stack	*new_point(int z, int color);
void	push_front(t_stack **lst, t_stack *new);
t_stack	*pop(t_stack **stack);
void	init_field(t_field *field);
void	init_vars(t_vars *vars);
int		parse_field(const int fd, t_field *field, t_stack **stack);
void	migrate_to_arr(t_field *field, t_stack **stack);
double	get_percent(int begin, int end, int temp);

#endif
