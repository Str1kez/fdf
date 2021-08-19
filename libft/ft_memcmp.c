/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:45:23 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 20:45:26 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*help_s1;
	unsigned char	*help_s2;

	help_s1 = (unsigned char *) s1;
	help_s2 = (unsigned char *) s2;
	while (n)
	{
		if (*help_s1 != *help_s2)
			return (*help_s1 - *help_s2);
		help_s1++;
		help_s2++;
		n--;
	}
	return (0);
}

// int main()
// {
// 	// char buf[20]; // = {'a', 'b', '1'};
// 	char *str = NULL;
// 	char *str2 = "";
// 	// ft_memset(buf, '\0', 20);
// 	// printf("%d\n", memcmp(str, str2, 10));
// 	// printf("%s\n", buf);
// 	// memccpy(buf, "", ' ', 20);
// 	// printf("%s\n", buf);
// 	printf("%d\n", ft_memcmp(str, str2, 10));
// 	// printf("%s\n", buf);
// 	// ft_memset(buf, 52, 20);
// 	// printf("%d\n", buf[0]);
// }
