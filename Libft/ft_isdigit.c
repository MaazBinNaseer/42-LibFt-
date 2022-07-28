/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:25:21 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:53:08 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int x)
{
	int	number;

	number = 1;
	if (x >= '0' && x <= '9')
		return (number);
	else
		return (0);
}

// int main()
// {
//     int r = '7';
//     int z = 'A';

//     printf("The value of the r is : %d\nThe value of the z is: %d\n",
		// ft_isdigit(r), ft_isdigit(z));
//     return (0);
// }
