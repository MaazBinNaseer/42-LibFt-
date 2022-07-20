/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:26:49 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/20 16:08:52 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the nullerminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200' is greater than `\0'.
*/

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t num)
{
    size_t i; 
 
    i = 0;
    if ((!s1 || !s2) || (num == 0))
        return (0);
    while ((i < num) && (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

// int main()
// {
//     char mystring[] = "hellowt";
//     char mystring2[] = "hellow";
    
//     printf("The string is: %d\n", strncmp(mystring, mystring2, 7));
//     printf("The string is: %d\n", ft_strncmp(mystring, mystring2, 7));
//     return (0); 
// }