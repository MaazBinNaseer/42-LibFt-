/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:27:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/28 14:19:00 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			n;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	n = 0;
	if (!ptr1 && !ptr2)
		return (0);
	if ((size_t)ptr2 > (size_t)ptr1)
	{
		while (len-- > 0)
			ptr2[len] = ptr1[len];
	}
	else
	{
		while (n < len)
		{
			ptr2[n] = ptr1[n];
			n++;
		}
	}
	return (ptr2);
}
