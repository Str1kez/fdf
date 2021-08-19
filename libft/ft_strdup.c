/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:22:05 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/27 20:22:08 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	s1_len;
	size_t	iter;

	s1_len = ft_strlen(s1);
	res = (char *)malloc(s1_len + 1);
	if (res)
	{
		iter = 0;
		while (iter < s1_len)
		{
			res[iter] = s1[iter];
			iter++;
		}
		res[iter] = '\0';
		return (res);
	}
	return (NULL);
}

// int	main()
// {
// 	int size = 8539;

// 	void *d1 = ft_calloc(size, sizeof(int));
// 	void *d2 = calloc(size, sizeof(int));
// 	printf("%d\n", memcmp(d1, d2, size * sizeof(int)));
// 	free(d1);
// 	free(d2);
// 	return (0);
// }
