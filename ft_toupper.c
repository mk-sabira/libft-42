#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}

int	main(void)
{
	char str[9] = "hello";
	int i;
	char lowcase;

	i = 0;
	while (str[i] != '\0')
	{
		lowcase = str[i];
		printf("%c", ft_toupper(lowcase));
		i++;
	}
	return (0);
}