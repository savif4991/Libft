/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:33 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:28:03 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    src_len;
    unsigned int    dst_len;

    i = 0;
    while (dst[i])
        i++;
    dst_len = i;
    j = 0;
    while (src[j])
        j++;
    src_len = j;
    j = 0;
    while (src[j] && i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}