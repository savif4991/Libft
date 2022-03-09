int     ft_isdigit(int c)
{
    char    a;

    a = (char)c;
    if (a <= '9' && a >= '0')
        return (1);
    else
        return (0);
}