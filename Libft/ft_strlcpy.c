/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:34:24 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 15:13:48 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	count = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

// int main()
// {
// 	char src[] = "This is my string";
// 	char dest[] = "";
// 	unsigned int n;

// 	n = 10;
// 	printf("Before\nSource: %s\nDestination: %s\nSize: %d \n", src, dest,n);

// 	n = ft_strlcpy(dest, src, n);

// 	printf("After\nSource: %s\nDestination: %s\n Size: %d \n", src, dest,n);

// 	n = strlcpy(dest, src, n);

// 	printf("After--\nSource: %s\nDestination: %s\n Size: %d \n", src, dest,n);
// 	return (0);
// }
