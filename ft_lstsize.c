/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:51:54 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 13:51:55 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*add;

	count = 1;
	add = lst->next;
	while (1)
	{
		if (add != 0)
		{
			count++;
			add = add->next;
		}
		else
			return (count);
	}
}
