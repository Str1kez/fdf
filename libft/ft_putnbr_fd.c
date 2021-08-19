/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:25:52 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/30 14:25:55 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	is_negative(int n)
{
	return (n < 0);
}

static int	num_len(int n)
{
	int				count;
	unsigned int	help;

	if (is_negative(n))
		help = (n + 1) * (-1) + 1;
	else
		help = n;
	count = 1;
	while (help > 9)
	{
		help /= 10;
		count++;
	}
	return (count);
}

static int	num_on_iter(int n, int iter, int len)
{
	int				i;
	unsigned int	help;

	if (is_negative(n))
		help = (n + 1) * (-1) + 1;
	else
		help = n;
	i = 0;
	while (i < len - iter - 1)
	{
		help /= 10;
		i++;
	}
	return (help % 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		negative;
	int		iter;

	iter = 0;
	negative = is_negative(n);
	len = num_len(n);
	if (negative)
		ft_putchar_fd('-', fd);
	while (iter < len)
	{
		ft_putchar_fd(num_on_iter(n, iter, len) + 48, fd);
		iter++;
	}
}

// ft_putchar_fd('\0', fd);
