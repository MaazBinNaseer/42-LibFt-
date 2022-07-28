/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:18:35 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 14:53:59 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}

// int main()
// {
//     char character = '!';
//     char space = ' ';
//     char bracket = '{';
//     char alpha = 'A';
//     char num = '6';
//     char non = '\t';

// //     printf("The values are: character: %d\nspace: %d\nbracket:
// 		%d\nalpha:%d\nnum:%d\n",
// 		ft_isprint(character),ft_isprint(space),ft_isprint(bracket),
// 		ft_isprint(alpha), ft_isprint(num));
// //     printf("The non print value is: %d\n", ft_isprint(non));
// //     return (0);
// // }
