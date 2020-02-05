# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 12:15:24 by wimaguir          #+#    #+#              #
#    Updated: 2020/02/05 10:22:51 by wimaguir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNC = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_strncmp.c ft_putnbr.c ft_atoi.c \
	   ft_strdup.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	   ft_isprint.c ft_memset.c ft_strchr.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memccpy.c \
	   ft_strstr.c ft_strnstr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	   ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c

TESTS = tests/*.c 

HEADER = libft.h

FLAGS = -c -Wall -Wextra -Werror

NAME = libft.a

OBJECTS = ft_putchar.o ft_putstr.o ft_strcpy.o ft_strncpy.o ft_strlen.o ft_strcmp.o ft_strncmp.o ft_putnbr.o ft_atoi.o \
		  ft_strdup.o ft_strcat.o ft_strlcat.o ft_strncat.o ft_tolower.o ft_toupper.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
		  ft_isprint.o ft_memset.o ft_strchr.o ft_strrchr.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_memccpy.o \
		  ft_strstr.o ft_strnstr.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o \
		  ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o


CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FUNC) -I $(HEADER)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strlen.o ft_strcpy.o ft_strncpy.o ft_strcmp.o ft_strncmp.o ft_putnbr.o ft_atoi.o \
		ft_strdup.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_tolower.o ft_toupper.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
	   	ft_isprint.o ft_memset.o ft_strchr.o ft_strrchr.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_memccpy.o \
		ft_strstr.o ft_strnstr.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o \
		ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o

 
	ranlib libft.a
clean:
	rm -rf $(OBJECTS)
	rm -rf a.out*
fclean: clean
	rm -rf $(NAME)
re:	fclean all
