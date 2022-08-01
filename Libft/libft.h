/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/01 19:26:06 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

/*------------CONVERSIONS-----------*/
int		ft_toupper(int a);
int		ft_tolower(int b);
int		ft_atoi(const char *str);
char    *ft_itoa(int n);

/*-------MATHS----------*/
int		ft_isdigit(int c);
int		ft_isalpha(int d);
int		ft_isalnum(int e);
int		ft_isascii(int f);
int		ft_isprint(int g);

/*--------------------------------STRINGS-------------------------------*/
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *str, int fd);
void    ft_putendl_fd(char *str, int fd);
void    ft_putnbr_fd(int number, int fd);
size_t  ft_strlen(char const *c);
int		ft_strncmp(const char *s1, const char *s2, size_t num);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strtrim(char const *str1, char const *str2);
char    *ft_strjoin(char const *str1, char const *str2);
char    *ft_strmapi(char const *str, char (*f)(unsigned int, char));
void    ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_substr(char const *string, unsigned int start, size_t len);

/*----------------------------MEMORY-----------------------------*/
void	*ft_memset(void *str, int num, size_t length);
void	*ft_memcpy(void *dest, const void *src, size_t length);
int		ft_memcmp(const void *str1, const void *str2, size_t num);
void	*ft_memchr(const void *str, int c, size_t numb);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);

/*----------------------RESETTOZERO--------------------*/
void	ft_bzero(void *str, size_t number);
#endif

