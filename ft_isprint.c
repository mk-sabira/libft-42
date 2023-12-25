#include <stdio.h>
#include <ctype.h>

int ft_isprint( int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}
int main(void)
{
    int c;

    c = 1;
    printf("the char c is : %d\n", isprint(c));
    printf("the func is : %d\n", ft_isprint(c) );
    c = '9';
    printf("the char c is : %d\n", isprint(c));
    printf("the func is : %d\n", ft_isprint(c) );
    return(0);
}