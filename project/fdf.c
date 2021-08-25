/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:10:11 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/25 21:27:19 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <fcntl.h>	   /* open() and O_XXX flags */
#include <sys/stat.h>  /* S_IXXX flags */
#include <sys/types.h> /* mode_t */
#include <unistd.h>	   /* close() */

int	esc_interrupt(int keycode)
{
	if (keycode == 53)
		exit(0);
	return (0);
}

static void	clean_arr(t_field *field)
{
	free(field->coords);
	free(field->colors);
}

int	main(int argc, char **argv)
{
	int		fd;
	t_vars	vars;
	t_field	field;
	t_stack	*stack;

	if (argc != 2)
		raise_error("Check params");
	init_vars(&vars);
	init_field(&field);
	stack = NULL;
	fd = open(argv[1], O_RDONLY);
	if (parse_field(fd, &field, &stack) == -1)
		raise_error("Error with FD");
	migrate_to_arr(&field, &stack);
	output_to_window(&field, &vars);
	mlx_put_image_to_window(vars.mlx, vars.win, vars.img, 0, 0);
	mlx_key_hook(vars.win, esc_interrupt, &vars);
	mlx_loop(vars.mlx);
	clean_arr(&field);
	return (0);
}
