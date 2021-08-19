/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:26:24 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/28 16:26:27 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <string.h>
// #include <stdio.h>

static size_t	minimum(size_t len, size_t strlen)
{
	if (len < strlen)
		return (len);
	return (strlen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	iter;

	iter = start;
	if (s && ft_strlen(s) > iter)
	{
		res = (char *)malloc(minimum(len, ft_strlen(s)) + 1);
		if (!res)
			return (NULL);
		while (s[iter] && iter < len + start)
		{
			res[iter - start] = s[iter];
			iter++;
		}
		res[iter - start] = '\0';
	}
	else
	{
		res = (char *)malloc(1);
		if (!res)
			return (NULL);
		*res = '\0';
	}
	return (res);
}

// int	main()
// {
// 	char	*str = "ijus";
// 	size_t	size = 10;
// 	char	*res = ft_substr(str, 10, size);
// 
// 	printf("%s\n", res);
// 	printf("%d\n", strncmp(res, "", 1));
// 	free(res);
// 	return (0);
// }
