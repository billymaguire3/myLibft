# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 12:15:24 by wimaguir          #+#    #+#              #
#    Updated: 2019/08/21 15:31:38 by wimaguir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNC = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_strncmp.c ft_putnbr.c ft_atoi.c \
	   ft_strdup.c ft_strcat.c ft_strncat.c ft_tolower.c ft_toupper.c

TESTS = tests/*.c 

HEADER = libft.h

FLAGS = -c -Wall -Wextra -Werror

NAME = libft.a

OBJECTS = ft_putchar.o ft_putstr.o ft_strcpy.o ft_strncpy.o ft_strlen.o ft_strcmp.o ft_strncmp.o ft_putnbr.o ft_atoi.o \
		  ft_strdup.o ft_strcat.o ft_strncat.o ft_tolower.o ft_toupper.o


CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FUNC) -I $(HEADER)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strlen.o ft_strcpy.o ft_strncpy.o ft_strcmp.o ft_strncmp.o ft_putnbr.o ft_atoi.o \
		ft_strdup.o ft_strcat.o ft_strncat.o ft_tolower.o ft_toupper.o


 
	ranlib libft.a
clean:
	rm -rf $(OBJECTS)
	rm -rf a.out*
fclean: clean
	rm -rf $(NAME)
re:	fclean all
