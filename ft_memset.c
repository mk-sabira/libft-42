/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:52:27 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/22 14:11:19 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*ptr2;

	ptr2 = ptr;
	while (len > 0)
	{
		*ptr2 = c;
		ptr2++;
		len--;
	}
	return (ptr);
}

int	main(void)
{
	char	str[10] = "hello";

	// memset(str + 2, 'd', 2);
	// printf("%s", str);
	ft_memset(str + 2, 'd', 2);
	printf("%s", str);
	return (0);
}
