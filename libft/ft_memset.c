/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:45:37 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 17:45:40 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*help;

	help = (unsigned char *) b;
	while (len)
	{
		*help++ = (unsigned char)c;
		len--;
	}
	return (b);
}

// int main()
// {
// 	int buf[20];
// 	// ft_memset(buf, '\0', 20);
// 	memset(buf, 52, 20);
// 	printf("%d\n", buf[0]);
// 	ft_memset(buf, 52, 20);
// 	printf("%d\n", buf[0]);
// }
