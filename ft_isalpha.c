#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}
int main(void)
{
    int c;

    c = 'H';
    printf("the actual fun is : %d\n", isalpha(c));
    printf("the func is : %d\n", ft_isalpha(c) );
    c = 't';
    printf("the char c is : %d\n", isalpha(c));
    printf("the func is : %d\n", ft_isalpha(c) );
    c = '9';
    printf("the char c is : %d\n", isalpha(c));
    printf("the func is : %d\n", ft_isalpha(c) );
    return(0);
}