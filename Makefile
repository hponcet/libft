# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/04 22:58:04 by fde-monc          #+#    #+#              #
#    Updated: 2015/12/09 16:17:55 by hponcet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_bzero.c \
ft_isalnum.c \
ft_lstmap.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memalloc.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memdel.c \
ft_memmove.c \
ft_memset.c \
ft_strcat.c \
ft_strchr.c \
ft_strclr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdel.c \
ft_strdup.c \
ft_strequ.c \
ft_striter.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlen.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncat.c \
ft_strncpy.c \
ft_strnequ.c \
ft_strnew.c \
ft_strrchr.c \
ft_strstr.c \
ft_strsub.c \
ft_tolower.c \
ft_toupper.c


OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

proper : all clean
	rm -rf *.out
	rm -rf ._*

re: fclean all

test : $(SRC)
	$(CC) $(CFLAGS) -I . $(SRC) ../mains/maindeouf.c
	./a.out
	rm -r a.out
