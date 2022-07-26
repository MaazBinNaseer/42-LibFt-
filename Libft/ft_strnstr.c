/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:00:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/25 15:23:50 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
 The strnstr() function locates the first occurrence of the null-terminated string needle in
     the string haystack, where not more than len characters are searched.  Characters that appear
     after a `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific
     API, it should only be used when portability is not a concern.
RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL
     is returned; otherwise a pointer to the first character of the first occurrence of needle is
     returned.
*/

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *str1, const char *str2, size_t len)
{   
    size_t i; 
    size_t m;
    
    i = 0;
    m = 0;
    if(!len || !str1 || !str2 || i > len)
        return (NULL);
    while (i < len && len != 0)
    { 
        while (*str1)
        {
            if (*str1 == *str2)
            {
                i = 0;
                m = 0;
                while(str2[i] != '\0')
                {
                    if(str1[i] != str2[i])
                    {
                        m++;
                        i++;
                    }
                    else 
                        return (0);                 
                }
               if(m == 0)
                return (char *)str1; 
            }
        str1++;
        }
    }
     return (char *)str1;
}


// int main()
// {
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "A";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 3);
//     printf("Returning the string: %s", ptr);
//     return (0);
    
// }