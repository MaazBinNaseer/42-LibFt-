/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:25:21 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/18 14:18:41 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The isdigit() function tests for a decimal digit character.  Regardless of locale,
     this includes the following characters only:

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''

     The isnumber() function behaves similarly to isdigit(), but may recognize additional
     characters, depending on the current locale setting.

     The value of the argument must be representable as an unsigned char or the value of
     EOF.

RETURN VALUES
     The isdigit() and isnumber() functions return zero if the character tests false and
     return non-zero if the character tests true.
*/

#include <stdio.h>

int ft_isdigit (int x)
{
    int number; 

    number = 1;

    if(x >= '0' && x <= '9')
        return (number); 
    else 
        return (0);
}

// int main()
// {
//     int r = '7';
//     int z = 'A'; 
    
//     printf("The value of the r is : %d\nThe value of the z is: %d\n", ft_isdigit(r), ft_isdigit(z));
//     return (0);
// }
