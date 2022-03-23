/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:12 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 20:00:57 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	get_count_for_malloc(unsigned int n)
{
	unsigned int	res;

	res = 1;
	while (n >= 10)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static void	alloc_num(char *res, unsigned int n, unsigned int dig)
{
	unsigned int	div;
	unsigned int	i;

	div = 1;
	i = 0;
	while (dig > 1)
	{
		div *= 10;
		dig--;
	}
	if (n == 0)
	{
		res[i] = '0';
		i++;
	}
	while (n > 0)
	{
		res[i] = n / div + '0';
		n %= div;
		div /= 10;
		i++;
	}
	res[i] = '\0';
}

static unsigned int	process_num(int n, unsigned int *m_count, int *sign)
{
	unsigned int	num;

	if (n < 0)
	{
		*m_count += 1;
		*sign *= -1;
		num = -n;
	}
	else
		num = n;
	return (num);
}

char	*ft_itoa(int n)
{
	unsigned int	m_count;
	int				sign;
	char			*res;
	unsigned int	i;
	unsigned int	num;

	m_count = 0;
	sign = 1;
	num = process_num(n, &m_count, &sign);
	m_count += get_count_for_malloc(num);
	res = (char *)malloc(sizeof(char) * (m_count + 1));
	if (res == 0)
		return (0);
	i = 0;
	if (sign == -1)
	{
		res[i] = '-';
		i++;
		m_count--;
	}
	alloc_num(&res[i], num, m_count);
	return (res);
}
