/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:25:02 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 15:25:06 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*help;

	help = NULL;
	while (*s)
	{
		if ((char)c == *s)
			help = (char *)s;
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (help);
}

// int	main()
// {
// 	char *s_src = "r43trgerbh5rebv";
// 	// char c = 'a';
// 	char *res, *res2;
// 	// char *res2;

// 	int t = 1;
// 	for (int i = -10; i < 200; i++)
// 	{
// 		res = ft_strrchr(s_src, i);
// 		res2 = strrchr(s_src, i);
// 		t *= res == res2;
// 		printf("%s\t", res);
// 		printf("%s\n", res2);
// 	}
// 	printf("%d\n", t);
// }
