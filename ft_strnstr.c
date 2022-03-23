/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:43 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/23 12:25:29 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*find_wd(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (i < n && s1[i] && s1[i] == s2[i])
		{
			i++;
			if (s2[i] == '\0')
				return ((char *)&s1[i]);
		}
		else
			break ;
	}
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	char			*res;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i])
	{
		if (s1[i] == s2[0])
		{
			res = find_wd(&s1[i], s2, n);
			if (res != 0)
				return (res);
			else
				i++;
		}
		else
			i++;
	}
	return (0);
}
