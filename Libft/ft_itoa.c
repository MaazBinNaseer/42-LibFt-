/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:48:03 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/01 15:14:44 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_itoa_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		size++;
	}
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long long	nb;

	nb = n;
	size = ft_itoa_size(nb);
	str = malloc(sizeof(char) * size + 1);
	if (nb == 0)
		str[0] = '0';
	if (!str || str == NULL)
		return (NULL);
	str[size] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	size--;
	while (nb)
	{
		str[size] = (((nb % 10)) + '0');
		size--;
		nb = nb / 10;
	}
	return (str);
}

// int main()
// {
//     int x = 456789;
//     char *ptr;
//     char *i1 = ft_itoa(-623);
// 	char *i2 = ft_itoa(156);
// 	char *i3 = ft_itoa(-0);
//     // ptr = ft_itoa(x);

//     // printf("Printing a string: %s\n", ptr);

//     printf("Printing a string: %s\n", i1);
//     if (strcmp(i1, "-623"))
// 	{
// 		printf("fail");;
// 	}
//     printf("Printing a string: %s\n", i2);
// 	if (strcmp(i2, "156"))
// 	{
// 		printf("fail");
// 	}
//     printf("Printing a string: %s\n", i3);
// 	if (strcmp("0", i3))
// 	{
// 		printf("fail");
// 	}

//     return (0);

// }