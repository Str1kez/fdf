/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:29:40 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 20:29:43 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*help_dst;
	const unsigned char	*help_src;
	unsigned char		*last_dst;
	const unsigned char	*last_src;

	help_dst = dst;
	help_src = src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		while (len--)
			*help_dst++ = *help_src++;
	else
	{
		last_dst = help_dst + len - 1;
		last_src = help_src + len - 1;
		while (len--)
			*last_dst-- = *last_src--;
	}
	return (dst);
}

// int main()
// {
	// char buf[20] = {'a', 'b', '1', 'p', 'r', 'i', 'v', 'e', 't'};
	// char *str = "let's go";
	// ft_memmove(buf + 2, buf, 18);
	// printf("%s\n", buf);
	// printf("%p\n", ft_memmove(((void *)0), ((void *)0), 5));
	// memccpy(buf, "", ' ', 20);
	// printf("%s\n", buf);
	// printf("%p\n", ft_memmove(buf, str, 10));
	// printf("%s\n", buf);
	// ft_memset(buf, 52, 20);
	// printf("%d\n", buf[0]);
// }
