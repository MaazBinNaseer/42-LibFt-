/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:47:43 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/01 13:47:43 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_readchar(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *str2)
{
	char	*str;
	size_t	i;
	size_t	starting;
	size_t	ending;

	if (!str1 || !str2)
		return (0);
	starting = 0;
	while (str1[starting] && ft_readchar(str1[starting], str2))
		starting++;
	ending = ft_strlen(str1);
	while (ending > starting && ft_readchar(str1[ending - 1], str2))
		ending--;
	str = (char *)malloc(sizeof(*str1) * (ending - starting + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (starting < ending)
		str[i++] = str1[starting++];
	str[i] = 0;
	return (str);
}

// int main()
// {
//     char *str1 = "l      l";
//     char *str2 = "l";

//     printf("%s\n", ft_strtrim(str1, str2));
//     return (0);

// }