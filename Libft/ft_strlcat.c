/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:37:46 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/08 14:26:50 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	offset;
	size_t	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	i = 0;
	if (d_len >= destsize)
		return (s_len + destsize);
	if (d_len < destsize - 1 && destsize > 0)
	{
		while (*(src + i) != '\0' && (d_len + 1 < destsize))
		{
			*(dest + offset) = *(src + i);
			offset++;
			i++;
			if (offset == (destsize - 1))
				break ;
		}
	}
	*(dest + offset) = '\0';
	return (d_len + s_len);
}

// int main()
// {
// 	char src[] = "Welcome home";
// 	char dest[]= "twenty four";

// 	printf("Dest Before: %s\n", dest);
// 	printf("Dest after : %zu\n", ft_strlcat(dest, src, 40));
// 	// printf("Dest after : %zu\n", strlcat(dest, src, 40));

// 	return (0);
// }
