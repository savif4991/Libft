/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:51:11 by daejlee           #+#    #+#             */
/*   Updated: 2022/04/23 15:34:18 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*add;

	if (lst == 0)
		return (0);
	add = lst->next;
	while (1)
	{
		if (add->next != 0)
			add = add->next;
		else
			return (add);
	}
}
