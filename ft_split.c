#include "libft.h"

static unsigned int    count_wd(char const *s, char c)
{
    unsigned int    i;
    unsigned int    count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        count++;
        while (s[i] != c && s[i])
            i++;
    }
    return (count);
}

static void    malloc_by_wd(char **res, char const *s, char c, unsigned int wd_count)
{
    unsigned int    wd_size;
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (i < wd_count)
    {
        wd_size = 0;
        while (1)
        {
            while (s[j] == c && s[j])
                j++;
            while (s[j] != c && s[j])
            {
                wd_size++;
                j++;
            }
            break ;
        }
        res[i] = (char *)malloc(sizeof(char) * (wd_size + 1));
        i++;
    }
    res[i] = 0;
}


char    **ft_split(char const *s, char c)
{
    unsigned int    wd_count;
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;
    char            **res;

    wd_count = count_wd(s, c);
    res = (char **)malloc(sizeof(char *) * (wd_count + 1));
    if (res == 0)
        return (0);
    malloc_by_wd(res, s, c, wd_count);
    i = 0;
    j = 0;
    k = 0;
    while (s[j])
    {
        while (s[j] == c && s[j])
            j++;
        k = 0;
        while (s[j] != c && s[j])
        {
            res[i][k] = s[j];
            j++;
            k++;
        }
        res[i][k] = '\0';
        i++;
    }
    return (res);
}