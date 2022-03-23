/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:29 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/23 15:17:41 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int		i;

	i = 0;
	if (c != '\0')
	{
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)&s[i]);
			else
				i++;
		}
	}
	else
	{
		while (s[i])
			i++;
		return ((char *)&s[i]);
	}
	return (0);
}
