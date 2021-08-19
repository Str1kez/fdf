/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:55:04 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:55:09 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	res;

	if (!dst || !src)
		return (0);
	res = 0;
	if (!dstsize)
	{
		while (*src++)
			res++;
		return (res);
	}
	while (*src)
	{
		if (res < dstsize - 1)
		{
			*dst = *src;
			dst++;
		}
		src++;
		res += 1;
	}
	*dst = '\0';
	return (res);
}

// int	main()
// {
// 	char *str = "BBBB";
// 	char buff1[0xF00];
// 	char buff2[0xF00];
// 	// size_t result;

// 	memset(buff1, 'A', 20);
// 	memset(buff2, 'A', 20);
// 	printf("%lu\n", strlcpy(buff1, str, 0));
// 	printf("%s\n", buff1);
// 	printf("%lu\n", ft_strlcpy(buff2, str, 0));
// 	printf("%s\n", buff2);
// 	return (0);
// }
