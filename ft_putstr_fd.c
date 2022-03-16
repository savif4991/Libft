#include <unistd.h>
//문자열 's'를 주어진 파일 서술자에 따라 출력한다.
void    ft_putstr_fd(char *s, int fd)
{
    unsigned int    i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}