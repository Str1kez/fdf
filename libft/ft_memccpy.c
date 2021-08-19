/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:18:28 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 20:18:31 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*help_dst;
	unsigned char	*help_src;
	unsigned char	search;

	search = (unsigned char) c;
	help_dst = (unsigned char *) dst;
	help_src = (unsigned char *) src;
	while (n)
	{
		*help_dst = *help_src;
		if (*help_src == search)
			return (help_dst + 1);
		help_dst++;
		help_src++;
		n--;
	}
	return (NULL);
}

// int main()
// {
// 	char buf[20]; // = {'a', 'b', '1'};
// 	char *str = "common";
// 	// ft_memset(buf, '\0', 20);
// 	printf("%p\n", memccpy(buf, str, 'n', 5));
// 	printf("%s\n", buf);
// 	ft_memccpy(buf, "", ' ', 20);
// 	printf("%s\n", buf);
// 	printf("%p\n", ft_memccpy(buf, str, 'n', 5));
// 	printf("%s\n", buf);
// 	// ft_memset(buf, 52, 20);
// 	// printf("%d\n", buf[0]);
// }
