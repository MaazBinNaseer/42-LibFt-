/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:27:02 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/26 18:46:44 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes
     long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between
     the first two differing bytes (treated as unsigned char values, so that `\200' is greater than `\0', for exam-
     ple).  Zero-length strings are always identical.  This behavior is not required by C and portable code should
     only depend on the sign of the returned value.

*/

#include "libft.h"
#include <stdio.h>

int ft_memcmp(const void *str1, const void *str2, size_t num)
{
     unsigned char *a; 
     unsigned char *b;
    int CompareValue; 
    
    CompareValue = 0;
    a = (unsigned char *)str1;
    b = (unsigned char *)str2; 
    
    if((a == b) || (!a && !b) || !num)
        return (CompareValue); 
    while (num > 0)
    {
        if(*a != *b)
        {
             return (*a - *b); 
        }
        num--; 
        a++;
        b++;
    }
    return (0);
}

// int main()
// {
//     int x = 0;

//     //Equal string comparison 
//     x = ft_memcmp("row", "row", 2);
//     printf("x = %d\n", x); 

//     //Str2 Greater than str1 
//     x = ft_memcmp("cmp", "clp", 2); 
//     printf("x = %d\n",x); 

//     //Str1 Greater than str2
//     x = ft_memcmp("abnbfd", "arnr", 2);
//     printf("x = %d\n",x);

//     //No strings input 
//     x = ft_memcmp("","",5);
//     printf("x = %d\n", x);
//     return (0);
    
// }

