/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:46 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/23 12:27:20 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	get_count_for_malloc(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (ft_strchr(&s1[i], set[j]) == 0)
			{
				j++;
				if (set[j] == '\0')
					count++;
			}
			else
				break ;
		}
		i++;
	}
	return (count);
}

static void	get_trimmedstr(char const *s1, char const *set, char *res)
{	
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (ft_strchr(&s1[i], set[j]) == 0)
			{
				j++;
				if (set[j] == '\0')
				{
					res[k] = s1[i];
					k++;
				}
			}
			else
				break ;
		}
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	count;
	char			*res;

	count = get_count_for_malloc(s1, set);
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (res == 0)
		return (0);
	get_trimmedstr(s1, set, res);
	res[count] = '\0';
	return (res);
}
