unsigned int    ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    char            *src;
    unsigned int    i;

    i = 0;
    while (i + 1 < size && dst[i] && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    i = 0;
    while (src[i])
        i++;
    return (i);
}