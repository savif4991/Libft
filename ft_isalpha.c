int     ft_isalpha(int c)
{
    char    a;

    a = (char)c;
    if (a <= 'Z' && a >= 'A')
        return (1024);
    else if (a <= 'z' && a >= 'a')
        return (1024);
    else
        return (0);
}