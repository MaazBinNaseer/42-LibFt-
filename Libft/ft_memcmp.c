/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:27:02 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:55:59 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned char	*a;
	unsigned char	*b;
	int				compare_value;

	compare_value = 0;
	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	if ((a == b) || (!a && !b) || !num)
		return (compare_value);
	while (num > 0)
	{
		if (*a != *b)
		{
			return (*a - *b);
		}
		num--;
		a++;
		b++;
	}
	return (0);
}

// int main()
// {
//     int x = 0;

//     //Equal string comparison
//     x = ft_memcmp("row", "row", 2);
//     printf("x = %d\n", x);

//     //Str2 Greater than str1
//     x = ft_memcmp("cmp", "clp", 2);
//     printf("x = %d\n",x);

//     //Str1 Greater than str2
//     x = ft_memcmp("abnbfd", "arnr", 2);
//     printf("x = %d\n",x);

//     //No strings input
//     x = ft_memcmp("","",5);
//     printf("x = %d\n", x);
//     return (0);

// }
