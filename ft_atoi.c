/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:26:13 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:26:16 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int    ft_atoi(const char *nptr)
{
    int    sign;
    int    i;
    int    res;

    sign = 1;
    i = 0;
    res = 0;
    if (nptr[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (nptr[i] <= '9' && nptr[i] >= '0')
    {
        res = res*10 + nptr[i] - '0';
        i++;
    }
    return (res * sign);
}
