/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:14 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:28:03 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned int    i;
    char            *temp;
    char            a;

    i = 0;
    a = (char)c;
    temp = (char *)s;
    while (i < n)
    {
        if (temp[i] == a)
            return (&temp[i]);
        else
            i++;
    }
    return (0);
}