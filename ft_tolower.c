/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:51:43 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/22 10:52:22 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char str[9] = "HELLO";
// 	int i;
// 	char lowcase;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		lowcase = str[i];
// 		printf("%c", ft_tolower(lowcase));
// 		i++;
// 	}
// 	return (0);
// }
