#include <unistd.h>
//fd - 0, 1, 2 / stdin, stdout, stderr
//문자 'c'를 주어진 파일 서술자에 따라 출력한다.
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}