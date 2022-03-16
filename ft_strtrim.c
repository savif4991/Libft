#include <stdlib.h>
//'s1'의 복사본 전체에서 'set'에서 명시된 글자들을 제거한 문자열을 할당하고 리턴한다.

static char    *ft_strchr(const char *s, int c)
{
    char    a;
    int     i;

    a = (char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == a)
            return (&s[i]);
        else
            i++;
    }
    return (0);
}

static unsigned int    get_count_for_malloc(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    count;

    i = 0;
    count = 0;
    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (ft_strchr(&s1[i], set[j]) == 0)
            {
                j++;
                if (set[j] == '\0')
                    count++;
            }
            else
                break ;
        }
        i++;
    }
    return (count);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;
    unsigned int    count;
    char            *res;

    i = 0;
    count = get_count_for_malloc(s1, set);
    res = (char *)malloc(sizeof(char) * (count + 1));
    if (res == 0)
        return (0);
    i = 0;
    k = 0;
    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (ft_strchr(&s1[i], set[j]) == 0)
            {
                j++;
                if (set[j] == '\0')
                {
                    res[k] = s1[i];
                    k++;
                }
            }
            else
                break ;
        }
        i++;
    }
    res[k] = '\0';
    return (res);
}