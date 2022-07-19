/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:08:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/19 17:05:41 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does
     nothing.
*/
#include "libft.h"
#include <stdio.h>

void ft_bzero(void *str, size_t num)
{
    size_t x; 
    
    if(!str)
        return (NULL) ;
    x = 0;
    while (x < num)
    {
        *(char*)(str + x) = 0;
        x++;
    }
}

int main()
{
    char str[15] = "abcdefgh";
    printf("I am printing a string: %s\n", str);
    ft_bzero(str, 6);
    printf("I am printing a string: %c\n", str[5]);
    return (0); 
}