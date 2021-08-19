/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:13:57 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/30 14:13:59 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
// #include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// ft_putchar_fd(*s, fd);
// int main()
// {
// 	int fd = open("test.output", O_WRONLY, O_CREAT);	
// 	ft_putstr_fd("lorem ipsum dolor sit amet", fd);
// 	close(fd);
// 	return (0);
// }
