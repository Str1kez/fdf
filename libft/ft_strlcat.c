/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:41:30 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 14:41:41 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	res = dst_len;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	dst += dst_len;
	while (*src && res < dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
		res++;
	}
	*dst = '\0';
	return (dst_len + src_len);
}

// int	main()
// {
// 	char *src = "aaa";
// 	char dst1[20];
// 	char dst2[20];
// 	int ret1;
// 	int ret2;

// 	memset(dst1, 'B', 20);
// 	memset(dst2, 'B', 20);
// 	ret1 = strlcat(dst1, src, 20);
// 	ret2 = ft_strlcat(dst2, src, 20);
// 	printf("%s\n", dst1);
// 	printf("%s\n", dst2);
// 	printf("%d\n%d\n", ret1, ret2);
// 	return (0);
// }
