int     ft_isalpha(int c)
{
    char    a;

    a = (char)c;
    if (a <= 'Z' && a >= 'A')
        return (1);
    else if (a <= 'z' && a >= 'a')
        return (2);
    else
        return (0);
}