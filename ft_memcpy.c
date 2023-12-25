/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:31:59 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/24 12:38:55 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*src2;
	char	*dest2;

	i = 0;
	src2 = (char *) src;
	dest2 = (char *) dest;
	while (src2[i] != '\0' && i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

// int	main(void)
// {
// 	char src[5] = "hello";
// 	char dst[10] = "bye";
// 	int isrc[4] = {1, 2, 3, 4};
// 	int idest[10];

// 	printf("%s\n", ft_memcpy(dst, src, 3));
// 	printf("%s\n", ft_memcpy(idest, isrc, 1));
// 	printf("%s\n", memcpy(dst, src, 5));
// 	return (0);
// }
