/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:02 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:28:03 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc (unsigned int nmemb, unsigned int size)
{
    char                *arr;
    unsigned int        i;
    unsigned long long  temp;

    temp = (unsigned long long)(nmemb * size);
    if (nmemb == 0 || size == 0)
        return (0);
    if (temp > 4294967295)
        return (0);//에러가 출력되어야 한다는데, 원 함수 참조할것.
    arr = (char *)malloc(nmemb * size);
    i = 0;
    while (i < size * nmemb)
    {
        arr[i] = 0;
        i++;
    }
    return ((void *)arr);
}