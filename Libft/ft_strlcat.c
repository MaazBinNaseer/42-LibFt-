/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:37:46 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/21 11:56:15 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char *str)
{
	unsigned int counter; 

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}

int main()
{
	//char str1[50]; 
	//char str2[50];
	//char str3[] = "Connect together";	
	char dest[20] = "12";
	char src[]= "456790";
	unsigned int size = 6;
	unsigned int result;
	unsigned int result2;
	//unsigned int tam;
	//unsigned int tam2;
	
	printf("------\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, size);
	result = ft_strlcat(dest, src, size); 
	result2 = strlcat(dest,src, size);
	/*str1[0] = 'W';
	str1[1] = 'O';
	str1[2] = 'W';
	str1[3] = '\0';

	str2[0] = 'C';
	str2[1] = 'O';
	str2[2] = 'N';
	str2[3]	= '\0';

	tam = ft_strlcat(str1, str3, 0);
	tam2 = ft_strlcat(str2, str3, 0);

	printf("String final: %s, Tam: %d\n", str1, tam);
	printf("String final: %s, Tam2: %d\n", str2, tam2);*/ 
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result2);
	
	
//printf("This string you are compiling is: %u", ft_strlcat(dest, str, n));
			return 0;
}
