/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:12:16 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/10/24 16:33:01 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//Defining the buffer size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Helper functions
size_t	ft_strlen_b(char *string);
char	*ft_strchr_b(char *string, int search_char);
char	*ft_strjoin_b(char *s1, char *s2);

//Main functions
char	*ft_read(int fd, char *tmp_save);
char	*get_next_line(int fd);
char	*ft_getline(char *read);
char	*ft_free_buffer(char *buffer);
#endif