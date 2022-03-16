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

int     ft_isascii(int c)
{
    char    a;

    a = (char)c;
    if (a >= 0 && a <= 127)
        return (1);
    else
        return (0);
}

int     ft_isdigit(int c)
{
    char    a;

    a = (char)c;
    if (a <= '9' && a >= '0')
        return (2048);
    else
        return (0);
}

int     ft_isprint(int c)
{
    char    a;

    a = (char)c;
    if (a <= 126 && a >= 32)
        return (16384);
    else
        return (0);
}