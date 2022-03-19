#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *res;

    i = 0;
    while (s[i])
        i++;
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (res == 0)
        return (0);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}