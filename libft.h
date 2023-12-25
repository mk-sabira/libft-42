/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:20:19 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/24 12:43:09 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii (int c);
int ft_isdigit(int c);
int ft_isprint( int c);
int	ft_tolower(int c);
int ft_toupper(int c);


int ft_strlen(const char *str);
void	*ft_memset(void *ptr, int c, size_t len);
void ft_bzero(void *ptr, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);

size_t ft_strlcat(char * dst, const char * src, size_t dstsize);