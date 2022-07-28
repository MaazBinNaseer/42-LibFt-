/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:33:42 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:25:33 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding 
	 lower-case letter.  
	 The argument must be representable as an unsigned char or the value of EOF.

     Although the tolower() function uses the current locale,
	the tolower_l() function may
     be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
     If the argument is an upper-case letter,
	the tolower() function returns the corre-
     sponding lower-case letter if there is one; otherwise,
	the argument is returned
     unchanged.
*/

#include <stdio.h>
#include <stdlib.h>

int	ft_toupper(int h)
{
	if (h >= 'a' && h <= 'z')
	{
		h = h - 32;
	}
	return (h);
}

// int main()
// {
//     char z = 'r';

//     printf("The character is: %c\n", ft_toupper(z));
//     return (0);
// }