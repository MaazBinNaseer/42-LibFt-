/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:16:58 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/10/24 17:08:24 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//Defining the buffer size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

//Helper functions
size_t	ft_strlen2(char *string);
char	*ft_strchr2(char *string, int search_char);
char	*ft_strjoin2(char *s1, char *s2);

//Main functions
char	*ft_read(int fd, char *tmp_save);
char	*get_next_line(int fd);
char	*ft_getline(char *read);
char	*ft_free_buffer(char *buffer);
#endif