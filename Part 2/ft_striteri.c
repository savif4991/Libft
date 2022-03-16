//함수 f를 인자로 전달된 문자열에 각각 적용하고, 인덱스를 함수 f의 첫 번째 인자로 넘기시오.
//각 글자는 함수 f에 주소로 넘겨지고, 필요시 수정될 수 있어야함.
// 필요시 수정될 수 있다 -> 포인터로 선언된 문자열을 어떻게 수정??
void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}