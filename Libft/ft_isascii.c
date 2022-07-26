/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:55:13 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/26 18:46:55 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The isascii() function tests for an ASCII character, which is any character between 0
     and octal 0177 inclusive.

*/
#include "libft.h"
#include <stdio.h>

int ft_isascii (int ditto)
{
    return (ditto >= 0 && ditto <= 127);
}