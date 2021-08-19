/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:32:25 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/30 12:32:28 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		negative;
	int		iter;

	iter = 0;
	negative = is_negative(n);
	len = num_len(n);
	res = (char *)malloc(len + negative + 1);
	if (!res)
		return (NULL);
	if (negative)
		res[iter++] = '-';
	while (iter < len + negative)
	{
		if (negative)
			res[iter] = num_on_iter(n, iter - 1, len) + 48;
		else
			res[iter] = num_on_iter(n, iter, len) + 48;
		iter++;
	}	
	res[iter] = '\0';
	return (res);
}

// int	main()
// {
	// int	n = 0;
// 
	// printf("%d\n", num_on_iter(n, 0, num_len(n)));
	// printf("%d\n", num_len(n));
	// printf("%s\n", ft_itoa(n));
	// return (0);
// }
