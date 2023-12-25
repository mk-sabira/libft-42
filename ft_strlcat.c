#include "libft.h"

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    while(dst[i] && i < dstsize)
        i++;
    j = 0;
    while (src[j] && (i + j + 1) < dstsize)
    {
        dst[i + j]  = src[j];
        j++;
    }
    if (i < dstsize)
        dst[i + j] = '\0';
    return(i + ft_strlen(src));

}

int main (void)
{
    char dest[200] = "this is ";
    char src[13]= "42 abu dhabi";
    size_t destsize = ft_strlcat(dest, src, sizeof(dest));
    printf ("the destination: %s\n", dest);
    printf ("the destination len: %zu\n", destsize);
    return (0);
}