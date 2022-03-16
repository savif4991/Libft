#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char    mapi_test(unsigned int i, char c)
{
    i = 0;
    return (c);
}

void    *iteri_test(unsigned int i, char *c)
{//소문자를 대문자로 바꾸는 함수
    i = 0;
    char    a;

    a = *c;
    if (a <= 'z' && a >= 'a')
        a -= 32;
}

int     main()
{
    printf("--------------------TESTCASE for [ft_is.c]--------------------\n");
    for (int i = 0; i < 128; i++)
    {
        if (isalpha(i) != ft_isalpha(i)
            || isdigit(i) != ft_isdigit(i)
            || isalnum(i) != ft_isalnum(i) 
            || isascii(i) != ft_isascii(i)
            || isprint(i) != ft_isprint(i))
            {
                printf("%d / %c error occured.\n", i, i);
                printf("%d / %d \n", isprint(i), ft_isprint(i));
            }
        else
            printf("%d success.\n", i);
    }
    printf("--------------------TESTCASE for [ft_mem.c]--------------------\n");
    int    *numptr1 = malloc(sizeof(int));
    int    *numptr2 = malloc(sizeof(int));
    memset(numptr1, -500, 4);
    ft_memset(numptr2, -500, 4);
    printf("%d %d\n", *numptr1, *numptr2);
    free(numptr1);
    free(numptr2);
    printf("--------------------TESTCASE for [ft_itoa.c]--------------------\n");
    printf("%s\n", ft_itoa(2147483647));
    printf("%s\n", ft_itoa(-2147483648));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(0.1));
    printf("%s\n", ft_itoa(-0.1));
    printf("--------------------TESTCASE for [ft_strmapi.c]--------------------\n");
    char const *s1 = "I'm testing ft_strmapi.";
    printf("%s\n", ft_strmapi(s1, mapi_test));
    printf("--------------------TESTCASE for [ft_striteri.c]--------------------\n");
    char *s2 = "I'm testing ft_striteri.";
    ft_striteri(s2, iteri_test);//재검토 필요
    printf("%s\n", s2);
    
    return (0);
}