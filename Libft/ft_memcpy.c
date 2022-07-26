/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:08:27 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/25 15:49:38 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap,
     behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.
*/
#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t num)
{
    size_t i;
    char *csrc;
    char *cdest; 
    
    if(!src && !dst)
        return (NULL); 
    csrc = (char *)src;
    cdest = (char *)dst;
    i = 0; 
    while (i < num)
    {
        cdest[i] = (unsigned char)csrc[i]; 
        i++;
    } 
    return (cdest); 
}

// int main()
// {
//     char mystring[50] = "YELLLO TO FUN WORLD BABY!!!!!!!";
//     char dst[50] = "HELLO LADIES, ITS JOHNNY!";
//     printf("Before: %s\n", dst);
//     ft_memcpy(dst, mystring, 30);
//     printf("After: %s\n", dst);
//     return(0);
// }