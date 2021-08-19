/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:34:41 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:34:45 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if ((c < 127) && (c > 31))
		return (1);
	return (0);
}

// int main()
// {
// 	int t = 1;
// 	for (int i = -10; i < 130; i++)
// 	{
// 		t *= ft_isprint(i) == isprint(i);
// 	}
// 	printf("%d\n", t);
//     // char *s1 = "fsfds";
//     // char *s2 = "sfafs";
//     // printf("%d\n", ft_strncmp(s1, s2, 1));
//     // printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
