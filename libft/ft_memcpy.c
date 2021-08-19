/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:00:58 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 20:01:01 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*help_dst;
	unsigned char	*help_src;

	help_dst = (unsigned char *) dst;
	help_src = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*help_dst = *help_src;
		help_dst++;
		help_src++;
		n--;
	}
	return (dst);
}

// int main()
// {
	// char buf[20]; // = {'a', 'b', '1'};
	// char *str = "common";
	// ft_memset(buf, '\0', 20);
	// printf("%p\n", memcpy(buf, str, 4));
	// printf("%s\n", buf);
	// ft_memcpy(buf, "", 20);
	// printf("%p\n", ft_memcpy((void *)0, (void *)0, 3));
	// printf("%s\n", buf);
	// ft_memset(buf, 52, 20);
	// printf("%d\n", buf[0]);
// }
