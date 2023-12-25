/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:40:29 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/24 12:43:16 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    char *dst2;
    char *src2;

    dst2 = (char *) dst;
    src2 = (char *) src;

    if (dst2 == src2)
        return (dst);
    if (src2 < dst2)
    {
        while (len--)
            *(dst2 + len) =  *(src2 + len);
        return (dst);
    }
    while (len--)
    {
        *dst2 = *src;
        dst2++;
        src2++;
    }
        

    return(dst);
}
int main()
{
    char cSrc[] = "Aticleworld";
    // The destination string size is 14.
    char cDest[16] = {0};
    // copying n bytes of cSrc into cDest
    //Using own  function
    ft_memmove(cDest, cSrc, 12);
    printf("Copied string: %s\n", cDest);
    int iSrc[] = {10, 20, 30, 40, 50};
    int n = sizeof(iSrc)/sizeof(iSrc[0]);
    int iDest[n], index = 0;
    // copying n bytes of iSrc into iDest
    //Using own  function
    ft_memmove(iDest, iSrc, sizeof(iSrc));
    printf("\nCopied array is ");
    for (index=0; index<n; index++)
    {
        printf("%d ", iDest[index]);
    }
    return 0;
}