/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:38:43 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 20:38:46 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*help_s;
	unsigned char	search;

	search = (unsigned char) c;
	help_s = (unsigned char *) s;
	while (n)
	{
		if (*help_s == search)
			return (help_s);
		help_s++;
		n--;
	}
	return (NULL);
}

// int main()
// {
// 	// char buf[20]; // = {'a', 'b', '1'};
// 	char *str = "let's sgo";
// 	// ft_memset(buf, '\0', 20);
// 	printf("%p\n", memchr(str, 's', 10));
// 	// printf("%s\n", buf);
// 	// memccpy(buf, "", ' ', 20);
// 	// printf("%s\n", buf);
// 	printf("%p\n", ft_memchr(str, 's', 10));
// 	// printf("%s\n", buf);
// 	// ft_memset(buf, 52, 20);
// 	// printf("%d\n", buf[0]);
// }
