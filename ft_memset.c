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