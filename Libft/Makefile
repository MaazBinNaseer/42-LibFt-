# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 12:56:27 by mbin-nas          #+#    #+#              #
#    Updated: 2022/07/27 16:00:58 by mbin-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -.- Makefile -.-
NAME= libft.a 

#DECLARED VARIABLES  
CFILES= $(wildcard ./*.c)
OBJECTS= $(CFILES:.c=.o)

CC= gcc
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME) 
#generating the compile files 
$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
	
# Generating Object files 
%.o: %.c
	$(CC) $(CFLAGS) -c $< $^

#clearing out all the .O files 
clean: 
	rm -rf $(NAME) $(OBJECTS)
fclean: clean 
	rm -rf $(NAME)
	
re: clean all 
