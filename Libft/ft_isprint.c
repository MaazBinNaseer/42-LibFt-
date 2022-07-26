/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:18:35 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/25 16:57:39 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The isprint() function tests for any printing character, including space (` ').  The
     value of the argument must be representable as an unsigned char or the value of EOF.
RETURN VALUES
     The isprint() function returns zero if the character tests false and returns non-zero
     if the character tests true.
*/

#include "libft.h"
#include <stdio.h>

int ft_isprint (int c)
{
     if(c <= 126 && c >= 32)
          return (1);
     return(0);
}

// int main()
// {
//     char character = '!'; 
//     char space = ' '; 
//     char bracket = '{';
//     char alpha = 'A'; 
//     char num = '6';
//     char non = '\t';

//     printf("The values are: character: %d\nspace: %d\nbracket: %d\nalpha:%d\nnum:%d\n", ft_isprint(character),ft_isprint(space),ft_isprint(bracket), ft_isprint(alpha), ft_isprint(num));
//     printf("The non print value is: %d\n", ft_isprint(non));
//     return (0);
// }
