#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c >= 49 && c <= 57)
        return (1);
    else
        return (0);
}
int main(void)
{
    int c;

    c = 't';
    printf("the char c is : %d\n", isdigit(c));
    printf("the func is : %d\n", ft_isdigit(c) );
    c = '9';
    printf("the char c is : %d\n", isdigit(c));
    printf("the func is : %d\n", ft_isdigit(c) );
    return(0);
}