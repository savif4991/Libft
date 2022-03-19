/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:16 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 16:16:11 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*temp_d;
	char			*temp_s;

	i = 0;
	temp_d = (char *)dest;
	temp_s = (char *)src;
	while (i < n && temp_d[i] && temp_s[i])
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dest);
}
