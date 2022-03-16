#include <unistd.h>
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