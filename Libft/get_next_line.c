/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:21:56 by mbin-nas          #+#    #+#             */
/*   Updated: 2022/10/24 16:46:25 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*--------------------GET NEXT LINE FUNCTION--------------------------
• The main function which calls the other function to read the line
• Error handling if anything goes wrong 
• Call the read function to read from the file 
• Call the get line function to store the line from fd 
--------------------------------------------------------------------*/
char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > 2147483646)
		return (0);
	buffer = ft_read(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_getline(buffer);
	buffer = ft_free_buffer(buffer);
	return (line);
}

/*------------------------READ FILE FUNCTION----------------------------
• Creating a readline function that reads the line from the file fd
• Then store the read line function from fd to the buffer variable 
• Read_bytes will run and read the lines untill the conditions are fullfilled. 
• Error handling if the read_bytes reads -1 somewhere and come out of the 
   loop.
• The buffer then keeps adding it to the str_store variable  
--------------------------------------------------------------------*/
char	*ft_read(int fd, char *tmp_save)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr2(tmp_save, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		tmp_save = ft_strjoin2(tmp_save, buffer);
	}
	free(buffer);
	return (tmp_save);
}

/*---------GET THE LINE FROM THE FD AND EXTRACT FUNCTION------------
• Creating a fucntion that gets the line
• Buffer is reading untill the end of the line 
• The buffer is storing whatever is read intially to temp(line)
• If the EOF or EOL is found then replace EOL by \n
--------------------------------------------------------------------*/
char	*ft_getline(char *read)
{
	char	*line;
	int		i;

	i = 0;
	if (!read[i])
		return (NULL);
	while (read[i] && read[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (read[i] && read[i] != '\n')
	{
		line[i] = read[i];
		i++;
	}
	if (read[i] == '\n')
	{
		line[i] = read[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

/*-----FREEING THE BUFFER VARIABLE AND MOVING TO NEXT LINE------------
• Find the length of the line 
• Free the buffer line once everything has been shifted or not found
• The buffer gets free and then shifts to other lines 
--------------------------------------------------------------------*/
char	*ft_free_buffer(char *buffer)
{
	int		i;
	int		j;
	char	*saving;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	saving = (char *)malloc(sizeof(char) * (ft_strlen2(buffer) - i + 1));
	if (!saving)
		return (NULL);
	i++;
	j = 0;
	while (buffer[i])
		saving[j++] = buffer[i++];
	saving[j] = '\0';
	free(buffer);
	return (saving);
}
