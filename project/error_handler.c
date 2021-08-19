/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <tnessrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:36:10 by tnessrou          #+#    #+#             */
/*   Updated: 2021/08/19 20:41:08 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "libft.h"

void	raise_error(const char *str)
{
	if (errno)
		perror(str);
	else
		ft_putendl_fd(str, 2);
	exit(1);
}
