/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:57:14 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/22 14:13:01 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *ptr, size_t len)
{
	ft_memset(ptr, '\0', len);
}

int	main(void)
{
	char str[10] = "hello";

	ft_bzero(str, 5);
	printf("%s", str);
	return (0);
}
