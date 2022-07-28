/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:45:33 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:34 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int value)
{
	int	num;

	num = 1;
	if ((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
		return (num);
	else if (value >= '0' && value <= '9')
		return (num);
	else
		return (0);
}

// // int main()
// // {
// //     char x = ' ';
// //     char z = '\t';
// //     char m = 'O';
// //     char n = '8';

// //     printf("The value of x, z, m ,n is: %d, %d, %d, %d\n", ft_isalnum(x),
// 		ft_isalnum(z), ft_isalnum(m), ft_isalnum(n);
// //     return (0);

// // }