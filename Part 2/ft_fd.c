#include <unistd.h>
//fd - 0, 1, 2 / stdin, stdout, stderr
//문자 'c'를 주어진 파일 서술자에 따라 출력한다.
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
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
//정수 'n'을 주어진 파일 서술자에 따라 출력한다.
void    ft_putnbr_fd(int n, int fd)
{
    unsigned int    num;
    unsigned int    num_copy;
    unsigned int    i;
    unsigned int    div;
    char            temp;

    if (n == 0)
    {
        write(fd, "0", 1);
        return ;
    }
    else if (n < 0)
    {
        write(fd, "-", 1);
        num = -n;
    }
    else
        num = n;
    i = 0;
    div = 1;
    num_copy = num;
    while (num_copy >= 10)
    {
        num_copy /= 10;
        div *= 10;
    }
    while (num > 0)
    {
        temp = num / div + '0';
        write(fd, &temp, 1);
        num %= div;
        div /= 10;
    }
}