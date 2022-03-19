/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:17 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 17:06:56 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*d;
	char			*s;

	d = (char *)dest;
	s = (char *)src;
	if (s >= d)
	{
		i = 0;
		while (i < n && d[i] && s[i])
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0 && d[n] && s[n])
		{
			d[n] = s[n];
			n--;
		}
	}
	return (dest);
}
