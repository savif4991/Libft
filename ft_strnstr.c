char    *ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    while (i < n && s1[i])
    {
        if (s1[i] == s2[0])
        {
            j = 0;
            while (1)
            {
                if (i < n && s1[i] && s1[i] == s2[j])
                {
                    i++;
                    j++;
                    if (s2[j] == '\0')
                        return ((char *)&s1[i]);
                }
                else
                    break ;
            }
        }
        else
            i++;
    }
    return (0);
}