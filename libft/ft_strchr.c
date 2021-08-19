/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:06:37 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 15:06:40 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)c == *s)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main()
// {
// 	char s[] = "tripouille";
// 	// char c = 'a';
// 	int t = 1;
// 	for (int i = -10; i < 200; i++)
// 	{
// 		res = ft_strchr(s_src, i);
// 		res2 = strchr(s_src, i);
// 		t *= res == res2;
// 		printf("%s\t", res);
// 		printf("%s\n", res2);
// 	}

// 	printf("%d\n", t);
// }
