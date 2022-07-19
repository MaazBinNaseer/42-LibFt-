/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/19 16:08:55 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h> 
#include <stdio.h>

/*-------CONVERSIONS------*/
int ft_toupper(int a);
int ft_tolower(int b);
int ft_isdigit(int c);
int ft_isalpha(int d);
int ft_isalnum(int e);
int ft_isascii(int f);
int ft_isprint(int g);

/*--------STRINGS-------*/
size_t ft_strlen(const char *c);

/*-------MEMORY--------*/
void *ft_memset(void *str, int num, size_t length);

/*------RESETTOZERO----*/
void ft_bzero(void *str, size_t number);

#endif