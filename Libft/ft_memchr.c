/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:59:59 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/25 16:06:11 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t numb)
{
	unsigned char	ch;
	unsigned char	*ms;
	size_t			i;

	ch = c;
	ms = (unsigned char *)str;
	i = 0;
	while (i < numb)
	{
		if ((unsigned char)*ms == ch)
			return ((char *)ms);
		i++;
		ms++;
	}
	return (NULL);
}

// int main()
// {
//      const char string[] = "The string is wow";
//     int x = 't';
//     const char *p;

//     p = ft_memchr(string, x, 3);
//     printf("String starting from %c is: %s\n", x, p);
//     return (0);

// }