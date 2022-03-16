int    ft_tolower(int c)
{
    char    a;

    a = (char)c;
    if (a <= 'Z' && a >= 'A')
        a += 32;
    return ((int)a);
}