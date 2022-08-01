/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:49:03 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/01 15:08:15 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	int	x;

	if (str != NULL)
	{
		x = 0;
		while (str[x] != '\0')
		{
			ft_putchar_fd(str[x], fd);
			x++;
		}
	}
}
