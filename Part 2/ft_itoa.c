#include <stdlib.h>
//정수를 표시하는 문자열을 리턴할것. 말록 실패시 NULL리턴.

unsigned int    get_count_for_malloc(unsigned int n)
{
    unsigned int    res;

    res = 1;
    while (n >= 10)
    {
        n /= 10;
        res++;
    }
    return (res);
}

void    *alloc_num(char *res, unsigned int n, unsigned int dig)
{
    unsigned int    div;
    unsigned int    i;

    div = 1;
    i = 0;
    while(dig > 1)
    {
        div *= 10;
        dig--;
    }
    if (n == 0)
    {
        res[i] = '0';
        i++;
    }
    while (n > 0)
    {
        res[i] = n / div + '0';
        n %= div;
        div /= 10;
        i++;
    }
    res[i] = '\0';
}

char    *ft_itoa(int n)
{
    unsigned int    m_count;
    int             sign;
    char            *res;
    unsigned int    i;
    unsigned int    num;

    m_count = 0;
    sign = 1;
    if (n < 0)
    {
        m_count += 1;
        sign *= -1;
        num = -n;
    }
    else
        num = n;
    m_count += get_count_for_malloc(num);
    res = (char *)malloc(sizeof(char) * (m_count + 1));
    if (res == 0)
        return (0);
    i = 0;
    if (sign == -1)
    {
        res[i] = '-';
        i++;
        m_count--;
    }
    alloc_num(&res[i], num, m_count);
    return (res);
}