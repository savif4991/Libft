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
} //이거 좀 불안함. -> 같은 로직의 함수 mem마지막임.