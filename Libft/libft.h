/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:06 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/08/05 18:41:58 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

/*------------MAIN STRUCTURE LIST ----------*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*--------------------------LINKED LIST------------------------------*/
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *new);
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/*------------CONVERSIONS-----------*/
int					ft_toupper(int a);
int					ft_tolower(int b);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);

/*-------MATHS----------*/
int					ft_isdigit(int c);
int					ft_isalpha(int d);
int					ft_isalnum(int e);
int					ft_isascii(int f);
int					ft_isprint(int g);

/*--------------------------------STRINGS-------------------------------*/
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int number, int fd);
size_t				ft_strlen(char const *c);
int					ft_strncmp(const char *s1, const char *s2, size_t num);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dest, const char *src, size_t destsize);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strtrim(char const *str1, char const *str2);
char				*ft_strjoin(char const *str1, char const *str2);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
char				*ft_substr(char const *string, unsigned int start,
						size_t len);
char				**ft_split(char const *str, char c);
/*-----------------------------------MEMORY-------------------------------*/
void				*ft_memset(void *str, int num, size_t length);
void				*ft_memcpy(void *dest, const void *src, size_t length);
int					ft_memcmp(const void *str1, const void *str2, size_t num);
void				*ft_memchr(const void *str, int c, size_t numb);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memmove(void *dst, const void *src, size_t len);

/*----------------------RESETTOZERO--------------------*/
void				ft_bzero(void *str, size_t number);
#endif
