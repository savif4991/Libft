#include "libft.h"

static unsigned int      ft_strlen(const char *s)
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    int             i;
    unsigned int    s1_len;
    unsigned int    s2_len;
    char            *res;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    res = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (res == 0)
        return (0);
    i = 0;
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        res[s1_len + i] = s2[i];
        i++;
    }
    res[s1_len + i] = '\0';
    return (res);
}