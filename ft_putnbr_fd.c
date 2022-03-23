/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:25 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/23 12:19:14 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	process_num(int n, int fd)
{
	unsigned int	num;

	if (n == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		num = -n;
	}
	else
		num = n;
	return (num);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	unsigned int	num_copy;
	unsigned int	div;
	char			temp;

	div = 1;
	num = process_num(n, fd);
	if (num == 0)
		return ;
	num_copy = num;
	while (num_copy >= 10)
	{
		num_copy /= 10;
		div *= 10;
	}
	while (num > 0)
	{
		temp = num / div + '0';
		write(fd, &temp, 1);
		num %= div;
		div /= 10;
	}
}
