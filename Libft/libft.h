/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/07/21 15:20:25 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h> 
#include <stdio.h>

/*-------CONVERSIONS------*/
int ft_toupper(int a);
int ft_tolower(int b);

/*-------MATHS----------*/
int ft_isdigit(int c);
int ft_isalpha(int d);
int ft_isalnum(int e);
int ft_isascii(int f);
int ft_isprint(int g);

/*--------STRINGS-------*/
size_t ft_strlen(const char *c);
int ft_strncmp(const char *s1, const char *s2, size_t num);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c)


/*-------MEMORY--------*/
void *ft_memset(void *str, int num, size_t length);
void *ft_memcpy(void *dest, const void *src, size_t length);
int ft_memcmp(const void *str1, const void *str2, size_t num);

/*------RESETTOZERO----*/
void ft_bzero(void *str, size_t number);

#endif