/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:43:05 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:43:08 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_toupper(int c)
{
	if ((c < 123) && (c > 96))
		return (c - 32);
	return (c);
}

// int main()
// {
// 	int t = 1;
// 	for (int i = -10; i < 160; i++)
// 	{
// 		t *= ft_toupper(i) == toupper(i);
// 	}
// 	printf("%d\n", t);
//     // char *s1 = "fsfds";
//     // char *s2 = "sfafs";
//     // printf("%d\n", ft_strncmp(s1, s2, 1));
//     // printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
