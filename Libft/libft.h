/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/18 13:35:38 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h> 
#include <stdio.h>

/*-------CONVERSIONS------*/
int ft_toupper(int h);
int ft_tolower(int r);
int ft_isdigit(int r);

/*--------STRINGS-------*/
size_t ft_strlen(const char *c);

#endif