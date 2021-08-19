/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:57:43 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/27 19:57:45 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!count)
		count = 1;
	if (!size)
		size = 1;
	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, size * count);
	return (ptr);
}

// int	main()
// {
// 	int size = 8539;

// 	void *d1 = ft_calloc(size, sizeof(int));
// 	void *d2 = calloc(size, sizeof(int));
// 	printf("%d\n", memcmp(d1, d2, size * sizeof(int)));
// 	free(d1);
// 	free(d2);
// 	return (0);
// }
