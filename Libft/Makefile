# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 12:56:27 by mbin-nas          #+#    #+#              #
#    Updated: 2022/08/08 14:02:53 by mbin-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -.- Makefile -.-
NAME= libft.a 

#DECLARED VARIABLES  
CFILES= 	ft_putchar_fd.c         ft_strmapi.c		ft_putendl_fd.c \
		ft_atoi.c               ft_strncmp.c		ft_strnstr.c \
		ft_bzero.c              ft_putnbr_fd.c          ft_strrchr.c \
		ft_calloc.c             ft_putstr_fd.c          ft_strtrim.c \
		ft_isalnum.c            ft_split.c              ft_substr.c \
		ft_isalpha.c            ft_strchr.c             ft_tolower.c \
		ft_isascii.c            ft_strdup.c             ft_striteri.c \
		ft_isdigit.c            ft_memchr.c             ft_toupper.c \
		ft_isprint.c            ft_memcmp.c             ft_strjoin.c \
		ft_memmove.c            ft_strlcpy.c		ft_itoa.c \
		ft_memset.c             ft_strlen.c		ft_strlcat.c \
		ft_memcpy.c             
		
OBJECTS= $(CFILES:.c=.o)
BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
		ft_lstlast.c

BONUS_OJS = $(BONUS:.c=.o)
CFLAGS = -Wall -Wextra -Werror 
CC = gcc
#generating the compile files 
$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
all: $(NAME) 
# Generating Object files 
%.o: %.c
	$(CC) $(CFLAGS) -c $< $^
	
bonus: $(BONUS_OJS)
		ar -rcs $(NAME) $(BONUS_OJS)

#clearing out all the .O files 
clean: 
	rm -rf $(NAME) $(OBJECTS) $(BONUS_OJS)
fclean: clean 
	rm -rf $(NAME)
	
re: clean all 
