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