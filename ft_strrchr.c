/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daejlee <daejlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:45 by daejlee           #+#    #+#             */
/*   Updated: 2022/03/19 15:28:03 by daejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    char    a;
    int     i;
    char    *res;

    a = (char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == a)
        {
            res = (char *)&s[i];
            while (1)
            {
                i++;
                if (s[i] == a)
                    break ;
                else if (s[i] == '\0')
                    return (res);
            }
        }
        else
            i++;
    }
    return (0);
}