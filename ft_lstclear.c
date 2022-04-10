/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:50:20 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 13:50:21 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*add;
	t_list	*temp;

	add = *lst;
	temp = add;
	while (temp != 0)
	{
		add = add->next;
		del(temp->content);
		free(temp);
		temp = add;
	}
	*lst = 0;
}
