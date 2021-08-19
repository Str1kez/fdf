/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:54:47 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 12:54:52 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c < 91) && (c > 64))
		return (1);
	if ((c < 123) && (c > 96))
		return (1);
	return (0);
}

// int main()
// {
// 	char c1 = 'v';
// 	printf("%d\n", ft_isalpha(c1));
// 	printf("%d\n", isalpha(c1));
//     // char *s1 = "fsfds";
//     // char *s2 = "sfafs";
//     // printf("%d\n", ft_strncmp(s1, s2, 1));
//     // printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
