unsigned int      ft_strlen(const char *s)
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

unsigned int    ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    char            *src_c;
    unsigned int    i;

    src_c = (char *)src;
    i = 0;
    while (i + 1 < size && dst[i] && src_c[i])
    {
        dst[i] = src_c[i];
        i++;
    }
    dst[i] = '\0';
    i = 0;
    while (src_c[i])
        i++;
    return (i);
}

unsigned char   ft_strlcat(char dst, const char src, unsigned int dstsize)
{

}