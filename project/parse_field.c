/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_field.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:02:51 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/23 20:48:35 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"

static void	clean_split(char **arr)
{
	char	**help;

	help = arr;
	while (*arr)
	{
		str_clean(arr);
		arr++;
	}
	free(help);
}

static void	parse_data(char **data, t_stack **stack)
{
	int	z;
	int	color;

	if (!(ft_isnum(data[0], 10)))
		raise_error("Error in data");
	if (data[1] && !(ft_isnum(data[1], 16)))
		raise_error("Error in color");
	z = ft_atoi(data[0]);
	if (data[1])
		color = ft_atoi_16(data[1]);
	else
		color = -1;
	push_front(stack, new_point(z, color));
}

static void	parse_line(char **arr, t_field *field, t_stack **stack)
{
	int		x;
	char	**data;

	x = 0;
	while (*arr)
	{
		data = ft_split(*arr, ',');
		if (!data)
			raise_error("Error in split");
		parse_data(data, stack);
		clean_split(data);
		x++;
		arr++;
	}
	if (field->vertical == 0)
		field->horizontal = x;
	else if (field->horizontal != x)
		raise_error("Error in horizontal length");
}

int	parse_field(const int fd, t_field *field, t_stack **stack)
{
	int		check;
	char	*line;
	char	**split_line;

	if (fd < 0)
		raise_error("Error fd");
	check = get_next_line(fd, &line);
	while (check == 1)
	{
		split_line = ft_split(line, ' ');
		if (!split_line)
			raise_error("Error split");
		parse_line(split_line, field, stack);
		clean_split(split_line);
		str_clean(&line);
		field->vertical++;
		check = get_next_line(fd, &line);
	}
	if (!*stack)
		raise_error("Error in stack");
	str_clean(&line);
	return (check);
}
