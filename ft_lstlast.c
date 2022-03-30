/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:51:11 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 13:51:13 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*add;

	add = lst->next;
	while (1)
	{
		if (add->next != 0)
			add = add->next;
		else
			return (add);
	}
}
