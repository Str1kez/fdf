/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:49:21 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/16 18:49:23 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	s_1;
	unsigned char	s_2;

	s_1 = *s1;
	s_2 = *s2;
	if (n == 0)
		return (0);
	while (s_1 == s_2 && n > 1 && s_1 && s_2)
	{
		n--;
		s_1 = *++s1;
		s_2 = *++s2;
	}
	return (s_1 - s_2);
}

// int main()
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";
//     printf("%d\n", ft_strncmp(s1, s2, 6));
//     printf("%d\n", strncmp(s1, s2, 6));
//     return (0);
// }
