/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:45:31 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 19:45:34 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*help;

	help = (unsigned char *) s;
	while (n)
	{
		*help = 0;
		help++;
		n--;
	}
}

// int main()
// {
// 	int *buf = NULL;
// 	// ft_memset(buf, '\0', 20);
// 	ft_bzero(buf, 50);
// 	for (int i = 0; i < 20; i++)
// 		printf("%d\t", buf[i]);
// 	// printf("\n");
// 	// bzero(buf, 20);
// 	// for (int i = 0; i < 20; i++)
// 	// 	printf("%d\n", buf[i]);
// 	// ft_bzero(buf, 20);
// 	// printf("%d\n", buf[0]);
// }
