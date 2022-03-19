/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:17 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:28:03 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned int    i;
    char            *temp_d;
    char            *temp_s;
    char            temp[n];

    i = 0;
    temp_d = (char *)dest;
    temp_s = (char *)src;
    while (i < n && temp_d[i] && temp_s[i])
    {
        temp[i] = temp_s[i];
        i++;
    }
    i = 0;
    while (i < n && temp_d[i] && temp_s[i])
    {
        temp_d[i] = temp[i];
        i++;
    }
    return (dest);
}