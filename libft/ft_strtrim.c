/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:42:31 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/28 17:42:34 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <string.h>
// #include <stdio.h>

static	int	exists_in_set(char sym, char const *set)
{
	while (*set)
	{
		if (sym == *set)
			return (1);
		set++;
	}
	return (0);
}

static	size_t	right_len(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0 && (exists_in_set(s1[len - 1], set)))
		len--;
	return (len);
}

static	size_t	left_len(char const *s1, char const *set)
{
	size_t	len;

	len = 0;
	while (exists_in_set(s1[len], set))
		len++;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	lindex;
	size_t	rindex;
	size_t	iter;

	if (!s1 || !set)
		return (NULL);
	rindex = right_len(s1, set);
	lindex = left_len(s1, set);
	if (!rindex)
		lindex = rindex;
	res = (char *)malloc(rindex - lindex + 1);
	if (!res)
		return (NULL);
	iter = lindex;
	while (lindex < rindex)
	{
		res[lindex - iter] = s1[lindex];
		lindex++;
	}
	res[lindex - iter] = '\0';
	return (res);
}

// int	main()
// {
// 	char	*str1 = "  \t \t \n   \n\n\n\t";
// 	char	*str2 = "";
// 	char	*res = ft_strtrim(str1, " \n\t");
// 
// 	printf("%s\n", res);
// 	printf("%d\n", strncmp(res, str2, 1));
// 	free(res);
// 	return (0);
// }
