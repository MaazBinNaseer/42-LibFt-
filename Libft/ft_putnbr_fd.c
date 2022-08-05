/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:19:32 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/01 17:07:50 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number == -2147483648)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('8', fd);
	}
	else if (number == 214748347)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('7', fd);
	}
	else if (number < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-number, fd);
	}
	else if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
	{
		ft_putchar_fd(number + 48, fd);
	}
}
// #include <fcntl.h>

// int main()
// {
//     int fd = open("file.text", O_RDWR);
//     ft_putnbr_fd(20, fd);
// }
