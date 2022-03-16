int     ft_isalnum(int c)
{
    char    a;

    a = (char)c;

    if (a <= 'Z' && a >= 'A')
        return (8);
    else if (a <= 'z' && a >= 'a')
        return (8);
    else if (a <= '9' && a >= '0')
        return (8);
    else
        return (0);
}