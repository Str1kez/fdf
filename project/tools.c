/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:20:53 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/19 21:45:44 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_atoi_16(const char *s)
{
	unsigned long	res;
	size_t			i;
	int				sign;

	res = 0;
	i = 2;
	if (s[i - 2] != '0' || s[i - 1] != 'x')
		return (0);
	while (ft_isnum_char(s[i], 16) > -1)
		res = res * 16 + ft_isnum_char(s[i], 16);
	return ((int)(res));
}

static int	ft_isnum_char(const char c, int base)
{
	const char	*NUMS;
	int			i;

	NUMS = "0123456789ABCDEF";
	i = 0;
	while (i < base)
	{
		if (c == NUMS[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_isnum(const char *s, int base)
{
	while (*s)
	{
		if (ft_isnum_char(*s, base) == -1)
			return (0);
		s++;
	}
	return (1);
}
