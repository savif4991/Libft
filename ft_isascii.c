int     ft_isascii(int c)
{
    char    a;

    a = (char)c;
    if (a >= 0 && a < 127)
        return (1);
    else
        return (0);
}