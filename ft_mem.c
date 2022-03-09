void    *ft_memset(void *s, int c, unsigned int n)
{
    unsigned int    i;
    char            *p;

    i = 0;
    p = (char *)s;
    while (i < n)
    {
        p[i] = (char)c;
        i++;
    }
    return (s);
}

void    ft_bzero(void *s, unsigned int n)
{
    unsigned int    i;
    char            *c;

    c = (char *)s;
    i = 0;
    while (i < n)
    {
        c[i] = '\0';
        i++;
    }
}

void    *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    int     i;
    char    *temp_d;
    char    *temp_s;

    i = 0;
    temp_d = (char *)dest;
    temp_s = (char *)src;
    while (i < n && temp_d[i] && temp_s[i])
    {
        temp_d[i] = temp_s[i];
        i++;
    }
    return (dest);
}

void    *ft_memmove(void *dest, const void *src, unsigned int n)
{
    int     i;
    char    *temp_d;
    char    *temp_s;
    char    temp[n];

    i = 0;
    temp_d = (char *)dest;
    temp_s = (char *)src;
    while (i < n && temp_d[i] && temp_s[i])
    {
        temp[i] = temp_s[i];
        i++;
    }
    i = 0;
    while (i < n && temp_d[i] && temp_s[i])
    {
        temp_d[i] = temp[i];
        i++;
    }
    return (dest);
}