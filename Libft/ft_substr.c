/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:21:39 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/01 16:36:58 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*dest;
	int		c;

	c = 0;
	if (!string)
		return (NULL);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (start >= ft_strlen(string))
		len = 0;
	if (len > ft_strlen(string))
		len = ft_strlen(string);
	while (c < (int)len)
	{
		*(dest + c) = *(string + start);
		string++;
		c++;
	}
	*(dest + c) = '\0';
	return (dest);
}

// int main()
// {
//     char str1[] = "Welcome to Qatar World Cup 2021";
//     int start = 5; cd
//     int n = 10;

//     char *dest = ft_substr(str1, start, n);
//     printf("My function string : %s\n", dest);
//     return(0);
// }