#include <stdlib.h>

void    *ft_calloc (unsigned int nmemb, unsigned int size)
{
    char    *arr;
    int     i;

    if (nmemb == 0 || size == 0)
        return (0);
    else if (nmemb * size > 4294967295)
        return (0);//에러가 출력되어야 한다는데, 원 함수 참조할것.
    arr = (char *)malloc(nmemb * size);
    i = 0;
    while (i < size * nmemb)
    {
        arr[i] = 0;
        i++;
    }
    return ((void *)arr);
}