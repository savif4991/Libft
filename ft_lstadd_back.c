/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:49:51 by daejlee           #+#    #+#             */
/*   Updated: 2022/04/23 19:51:05 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*adr;

	if (new == 0)
		return ;
	if (*lst == 0)
		*lst = new;
	adr = ft_lstlast(*lst);
	adr->next = new;
	new->next = 0;
}
