#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *str;
    int     i;

    i = 0;
    while (s[i])
        i++;
    str = (char *)malloc((i + 1) * sizeof(char));
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}