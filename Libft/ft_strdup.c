/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:55:51 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/27 15:04:33 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;
	char	*dest;

	ptr = (char *)src;
	len = ft_strlen(ptr) + 1;
	dest = malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}
