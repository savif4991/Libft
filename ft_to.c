int    ft_toupper(int c)
{
    char    a;

    a = (char)c;
    if (a <= 'z' && a >= 'a')
        a -= 32;
    return ((int)a);
}

int    ft_tolower(int c)
{
    char    a;

    a = (char)c;
    if (a <= 'Z' && a >= 'A')
        a += 32;
    return ((int)a);
}