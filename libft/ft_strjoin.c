/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:09:36 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/28 17:09:39 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <string.h>
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	iter;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	iter = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = (char *)malloc(s1_len + s2_len + 1);
	if (!res)
		return (NULL);
	while (iter < s1_len)
	{
		res[iter] = s1[iter];
		iter++;
	}
	while (iter < s1_len + s2_len)
	{
		res[iter] = s2[iter - s1_len];
		iter++;
	}
	res[s1_len + s2_len] = '\0';
	return (res);
}

// int	main()
// {
// 	char	*str1 = "";
// 	char	*str2 = "";
// 	char	*res = ft_strjoin(str1, str2);
// 
// 	printf("%s\n", res);
// 	// printf("%d\n", strncmp(res, "", 1));
// 	free(res);
// 	return (0);
// }
