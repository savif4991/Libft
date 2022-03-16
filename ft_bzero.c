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