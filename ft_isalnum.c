#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 49 && c <= 57))
        return (1);
    else
        return (0);
}
int main(void)
{
    int c;

    c = '*';
    printf("the actual fun is : %d\n", isalnum(c));
    printf("the func is : %d\n", ft_isalnum(c) );
    c = 't';
    printf("the char c is : %d\n", isalpha(c));
    printf("the func is : %d\n", ft_isalnum(c) );
    c = '9';
    printf("the char c is : %d\n", isalnum(c));
    printf("the func is : %d\n", ft_isalnum(c) );
    return(0);
}