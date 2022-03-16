void    *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    int     i;
    char    *temp_d;
    char    *temp_s;

    i = 0;
    temp_d = (char *)dest;
    temp_s = (char *)src;
    while (i < n && temp_d[i] && temp_s[i])
    {
        temp_d[i] = temp_s[i];
        i++;
    }
    return (dest);
}