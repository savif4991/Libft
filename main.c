#include "ft_is.c"
#include "ft_mem.c"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int     main()
{/*
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
    }*/
    printf("--------------------TESTCASE for [ft_mem.c]--------------------\n");
    int    *numptr1 = malloc(sizeof(int));
    int    *numptr2 = malloc(sizeof(int));
    memset(numptr1, -500, 4);
    ft_memset(numptr2, -500, 4);
    printf("%d %d\n", *numptr1, *numptr2);
    free(numptr1);
    free(numptr2);
    return (0);
}