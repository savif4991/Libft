/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:26:54 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/30 14:31:05 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static const char	*blank_check(const char *str)
{
	unsigned int	i;

	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	return (&str[i]);
}

static int	outlier_check(unsigned int res, int sign)
{
	if (res > 2147483648 && sign == -1)
		return (0);
	else if (res > 2147483647 && sign == 1)
		return (-1);
	else
		return (res * sign);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned int		i;
	unsigned int		res;

	str = blank_check(str);
	sign = 1;
	i = 0;
	res = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res = outlier_check(res, sign);
	return (res);
}
