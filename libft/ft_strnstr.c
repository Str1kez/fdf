/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:41:23 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 15:41:26 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	counter;

// 	counter = 0;
// 	if (!*needle)
// 		return ((char *)haystack);
// 	while ((*haystack || (!*haystack && !*needle)) && len)
// 	{
// 		if (*haystack == *needle || !*needle)
// 		{
// 			while (*haystack == *(needle + counter) && len && *haystack)
// 			{
// 				haystack++;
// 				len--;
// 				counter++;
// 			}
// 			if (!*(needle + counter))
// 				return ((char *)(haystack - counter));
// 			counter = 0;
// 			continue ;
// 		}
// 		haystack++;
// 		if (len)
// 			len--;
// 	}
// 	return (NULL);
// }

static int	substr_found(const char *s1, const char *s2, size_t n)
{
	unsigned char	s_1;
	unsigned char	s_2;

	s_1 = *s1;
	s_2 = *s2;
	while (s_1 == s_2 && n > 1 && s_1 && s_2)
	{
		n--;
		s_1 = *++s1;
		s_2 = *++s2;
	}
	if (!s_2)
		return (0);
	return (s_1 - s_2);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while ((*haystack || (!*haystack && !*needle)) && len)
	{
		if (!substr_found(haystack, needle, len) && ft_strlen(needle) <= len)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int	main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	// char * empty = (char*)"";

// 	// size_t max = 1;
// 	char *i1 = strnstr(haystack, "a", 1);
// 	char *i2 = ft_strnstr(haystack, "a", 1);
// 	printf("%s\n", i1);
// 	printf("%s\n", i2);
// }
