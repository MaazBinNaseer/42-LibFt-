/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:32:20 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:52:16 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int alpha)
{
	int	number;

	number = 1;
	if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
		return (number);
	else
		return (0);
}

// int main()
// {
//     char z = 'D';
//     char x = '2';

//     printf("The value of z is : %d\nThe value of x is: %d\n", ft_isalpha(z),
		// ft_isalpha(x));
//     return (0);
// }