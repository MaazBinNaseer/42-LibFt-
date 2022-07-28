/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:10:08 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 15:07:01 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strlen() function computes the length of the string s.
	 The strnlen() function attempts to compute the length of s,
	but never scans beyond the first maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters that 
	 precede the terminating NUL character.
	 The strnlen() function returns either the same result as 
	 strlen() or maxlen, whichever is smaller.
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	size_t	l;

	l = 0;
	while (c[l] != '\0')
	{
		l++;
	}
	return (l);
}

// int main()
// {
//     char myarray[] = "Welcome";
//     printf ("The value of the string is : %zu\n", ft_strlen(myarray));
//     return (0);
// }