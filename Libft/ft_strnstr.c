/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:00:57 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/21 15:40:47 by mbin-nas         ###   ########.fr       */
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

    i = 0; 
    while(i < len)
    {
        
    }
       
    
}


int main()
{
    
}