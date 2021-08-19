/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:43:29 by tnessrou          #+#    #+#             */
/*   Updated: 2021/05/03 19:43:32 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*help;

	if (!*lst)
		return ;
	while (*lst)
	{
		help = *lst;
		*lst = help->next;
		del(help->content);
		free(help);
	}
}

// int	main()
// {
// 	t_list * l =  ft_lstnew(malloc(1));
// 	for (int i = 0; i < 10; ++i)
// 		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
// 	ft_lstclear(&l, free);
// 	printf("%p\n", l);
// 	return (0);
// }
