/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:51:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 15:10:25 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	const char string[] = "The string is wow";
// 	int x = 'e';
// 	const char *p;

// 	p = ft_strrchr(string, x);
// 	printf("String starting from %c is: %s\n", x, p);
// 	//Returning Null
// 	int y = 'z';
// 	p = ft_strrchr(string, y);
// 	printf("String starting from %c is: %s\n", y, p);

// 	p = strrchr(string, x);
// 	printf("String starting from %c is: %s\n", x, p);
// 	return (0);
// }