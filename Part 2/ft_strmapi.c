#include <stdlib.h>
//함수 'f'를 문자열 's'의 각 문자들에 적용시키고,
//'f'함수의 연속 적용이 된 새 문자열을 만들기 위해(malloc을 통해)
//인덱스를 'f'의 첫 번째 인자로 넘겨준다.

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *res;

    i = 0;
    while (s[i])
        i++;
    res = (char *)malloc(sizeof(char) * (i + 1));
    if (res == 0)
        return (0);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}