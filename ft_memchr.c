void    *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned int    i;
    char            *temp;
    char            a;

    i = 0;
    a = (char)c;
    temp = (char *)s;
    while (i < n)
    {
        if (temp[i] == a)
            return (&temp[i]);
        else
            i++;
    }
    return (0);
}