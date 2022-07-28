/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:08:31 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:26:10 by mbin-nas         ###   ########.fr       */
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
     unchanged. */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_tolower(int r)
{
	if (r >= 'A' && r <= 'Z')
		r = r + 32;
	return (r);
}

/*int main()
{
    char z = 'A';

    printf("The character has changed to: %c\n", ft_tolower(z));
    return (0);
}*/