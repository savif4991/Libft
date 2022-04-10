/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:27 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 17:49:58 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	count_wd(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static void	malloc_by_wd(char **res, char const *s,
	char c, unsigned int wd_count)
{
	unsigned int	wd_size;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < wd_count)
	{
		wd_size = 0;
		while (1)
		{
			while (s[j] == c && s[j])
				j++;
			while (s[j] != c && s[j])
			{
				wd_size++;
				j++;
			}
			break ;
		}
		res[i] = (char *)malloc(sizeof(char) * (wd_size + 1));
		i++;
	}
	res[i] = 0;
}

void	make_arr(char const *s, char c, char **res)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (1)
	{
		while (s[j] == c && s[j])
			j++;
		if (s[j] == '\0')
			break ;
		k = 0;
		while (s[j] != c && s[j])
		{
			res[i][k] = s[j];
			j++;
			k++;
		}
		res[i][k] = '\0';
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	wd_count;
	char			**res;

	wd_count = count_wd(s, c);
	res = (char **)malloc(sizeof(char *) * (wd_count + 1));
	if (res == 0)
		return (0);
	malloc_by_wd(res, s, c, wd_count);
	make_arr(s, c, res);
	return (res);
}
