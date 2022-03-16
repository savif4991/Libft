
int    ft_atoi(const char *nptr)
{
    int    sign;
    int    i;
    int    res;

    sign = 1;
    i = 0;
    res = 0;
    if (nptr[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (nptr[i] <= '9' && nptr[i] >= '0')
    {
        res = res*10 + nptr[i] - '0';
        i++;
    }
    return (res * sign);
}