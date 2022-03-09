int    ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    unsigned int    i;
    unsigned char   *str1;
    unsigned char   *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n)
    {
        if (str1[i] == 0 && str2[i] == 0)
            break ;
        else if (str1[i] != str2[i])
            return ((int)(str1[i] - str2[i]));
        else
            i++;
    }
    return (0);
}