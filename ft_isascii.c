#include <stdio.h>
#include <ctype.h>

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}
int main(void)
{
    int c;

    c = 'A';
    printf("the char c is : %d\n", isascii(c));
    printf("the func is : %d\n", ft_isascii(c) );
    c = '9';
    printf("the char c is : %d\n", isascii(c));
    printf("the func is : %d\n", ft_isascii(c) );
    return(0);
}