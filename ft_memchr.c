void    *ft_memchr(const void *s, int c, unsigned int n)
{
    int     i;
    char    *temp;
    char    a;

    i = 0;
    a = (char)c;
    temp = (char *)s;
    while (temp[i])
    {
        if (temp[i] == a)
            return (&temp[i]);
        else
            i++;
    }
    return (0);
}