unsigned int      ft_strlen(const char *s)
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

unsigned int    ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    char            *src;
    unsigned int    i;

    i = 0;
    while (i + 1 < size && dst[i] && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    i = 0;
    while (src[i])
        i++;
    return (i);
}

unsigned char   ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    src_len;
    unsigned int    dst_len;

    i = 0;
    while (dst[i])
        i++;
    dst_len = i;
    j = 0;
    while (src[j])
        j++;
    src_len = j;
    j = 0;
    while (src[j] && i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}

char    *ft_strchr(const char *s, int c)
{
    char    a;
    int     i;

    a = (char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == a)
            return ((char *)&s[i]);
        else
            i++;
    }
    return (0);
}

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