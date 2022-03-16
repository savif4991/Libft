#include <stdlib.h>
//문자열 's'의 substring을 할당하고 리턴한다.
//substring은 'start'인덱스에서 시작하고 최대 사이즈는 'len'이다.
//리턴값은 substring이다. 할당이 실패하면 NULL이다.
char    *ft_substr(char const *s, unsigned int start, unsigned int len)
{
    unsigned int    i;
    char            *res;

    i = 0;
    while(i < len && s[start + i])
        i++;
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (res == 0)
        return (0);
    i = 0;
    while (i < len && s[start + i])
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}