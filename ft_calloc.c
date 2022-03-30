/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:02 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 14:36:45 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char				*arr;
	size_t				i;
	unsigned long long	temp;

	temp = (unsigned long long)(nmemb * size);
	if (temp > 4294967295)
		return (0);
	arr = (char *)malloc(nmemb * size);
	if (arr == 0)
		return (0);
	i = 0;
	while (i < size * nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
