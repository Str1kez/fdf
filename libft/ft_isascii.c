/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:20:00 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:20:04 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	if ((c > -1) && (c < 128))
		return (1);
	return (0);
}

// int main()
// {
// 	int t = 1;
// 	for (int i = -10; i < 130; i++)
// 	{
// 		t *= ft_isascii(i) == isascii(i);
// 	}
// 	printf("%d\n", t);
//     // char *s1 = "fsfds";
//     // char *s2 = "sfafs";
//     // printf("%d\n", ft_strncmp(s1, s2, 1));
//     // printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
