int    ft_strncmp(const char *s1, const char *s2, unsigned char n)
{
    unsigned int    i;
    unsigned char   *str1;
    unsigned char   *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
            break ;
        else if (s1[i] != s2[i])
            return ((int)(s1[i] - s2[i]));
        else
            i++;
    }
    return (0);
} //이거 좀 불안함. -> 같은 로직의 함수 mem2임.

char    *ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    while (i < n && s1[i])
    {
        if (s1[i] == s2[0])
        {
            j = 0;
            while (1)
            {
                if (i < n && s1[i] && s1[i] == s2[j])
                {
                    i++;
                    j++;
                    if (s2[j] == '\0')
                        return (&s1[i]);
                }
                else
                    break ;
            }
        }
        else
            i++;
    }
    return (0);
}

int    ft_atoi(const char *nptr)
{
    int    sign;
    int    i;
    int    res;

    sign = 1;
    i = 0;
    res = 0;
    if (nptr[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (nptr[i] <= '9' && nptr[i] >= '0')
    {
        res = res*10 + nptr[i] - '0';
        i++;
    }
    return (res * sign);
}