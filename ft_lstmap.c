/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:51:30 by daejlee           #+#    #+#             */
/*   Updated: 2022/04/23 20:35:54 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		size;
	int		count;
	t_list	*adr;
	t_list	*temp;

	count = 1;
	size = ft_lstsize(lst);
	adr = ft_lstnew(f(lst->content));
	temp = lst;
	while (count < size)
	{
		temp = temp->next;
		ft_lstadd_back(&adr, ft_lstnew(f(lst->content)));
		count++;
	}
	ft_lstclear(&lst, del);
	return (adr);
}
