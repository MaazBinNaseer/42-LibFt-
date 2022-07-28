/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:55:11 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:57:40 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The memset() function writes len bytes of value c 
	 (converted to an unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.
*/
#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int num, size_t length)
{
	size_t	move;

	move = 0;
	if (!str && !num)
		return (NULL);
	while (move < length)
	{
		*(unsigned char *)(str + move) = (unsigned char)num;
		move++;
	}
	return (str);
}

// int main()
// {
//     char myarray[50] = "Welcome to world of 42";
//     printf("Before: %s\n", myarray);
//     ft_memset(myarray + 2 , 'w', 10*sizeof(char));
//     printf("After: %s\n", myarray);
//     return (0);
// }