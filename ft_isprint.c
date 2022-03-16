int     ft_isprint(int c)
{
    char    a;

    a = (char)c;
    if (a <= 126 && a >= 32)
        return (16384);
    else
        return (0);
}