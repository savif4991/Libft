/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:10 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:28:03 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int c)
{
    char    a;

    a = (char)c;
    if (a <= 126 && a >= 32)
        return (16384);
    else
        return (0);
}