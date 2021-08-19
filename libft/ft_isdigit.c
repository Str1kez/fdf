/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:07:08 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:07:11 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

int	ft_isdigit(int c)
{
	if ((c < 58) && (c > 47))
		return (1);
	return (0);
}

// int main()
// {
// 	char c1 = '6';
// 	printf("%d\n", ft_isdigit(c1));
// 	printf("%d\n", isdigit(c1));
//     // char *s1 = "fsfds";
//     // char *s2 = "sfafs";
//     // printf("%d\n", ft_strncmp(s1, s2, 1));
//     // printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
