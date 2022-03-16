#include <unistd.h>
//문자열 's'를 주어진 파일 서술자에 따라 출력하고, 개행을 출력한다.
void    ft_putendl_fd(char *s, int fd)
{
    unsigned int    i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}