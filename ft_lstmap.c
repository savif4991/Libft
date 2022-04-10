/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:51:30 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 13:51:32 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*res;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list == 0)
		return (0);
	res = new_list;
	while (lst->next != 0)
	{
		new_list->content = f(lst->content);
		new_list->next = (t_list *)malloc(sizeof(t_list));
		if (new_list->next == 0)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		new_list = new_list->next;
		temp = lst;
		lst = lst->next;
		del(temp->content);
		free(temp);
	}
	return (res);
}
