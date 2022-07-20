/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:08:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/20 17:47:38 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in
     the string pointed to by s.  The terminating null character is considered to be
     part of the string; therefore if c is `\0', the functions locate the terminating
     `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occur-
     rence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or
     NULL if the character does not appear in the string.
*/
#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    unsigned char ch = c; 
    
    while(*str && (unsigned char)*str != ch)
        str++; 
    return (char *)(ch == (unsigned char)*str ? str: NULL);
}

int main()
{
    const char string[] = "The string is wow"; 
    int x = '5'; 
    char *p; 

    p = ft_strchr(string, x); 
    printf("String starting from %c is: %s\n", '5', p);
    return (0);
    
}