#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, unsigned int len)
{
    unsigned int    i;
    char            *res;

    i = 0;
    while(i < len && s[start + i])
        i++;
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (res == 0)
        return (0);
    i = 0;
    while (i < len && s[start + i])
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}