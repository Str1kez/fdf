/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:14:12 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:14:17 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c < 91) && (c > 64))
		return (1);
	if ((c < 123) && (c > 96))
		return (1);
	if ((c < 58) && (c > 47))
		return (1);
	return (0);
}

// int main()
// {
// 	char c1 = '\n';
// 	printf("%d\n", ft_isalnum(c1));
// 	printf("%d\n", isalnum(c1));
//     // char *s1 = "fsfds";
//     // char *s2 = "sfafs";
//     // printf("%d\n", ft_strncmp(s1, s2, 1));
//     // printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
