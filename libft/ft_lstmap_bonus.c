/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:26:08 by tnessrou          #+#    #+#             */
/*   Updated: 2021/05/03 20:26:11 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*list_copy(t_list *lst)
{
	t_list	*result;

	if (!lst)
		return (NULL);
	result = ft_lstnew(lst->content);
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&result, ft_lstnew(lst->content));
		lst = lst->next;
	}
	return (result);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*help;

	result = list_copy(lst);
	help = result;
	while (help)
	{
		help->content = f(help->content);
		if (!help->content)
			del(help->content);
		help = help->next;
	}
	return (result);
}
