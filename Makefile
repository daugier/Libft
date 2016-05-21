# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 22:14:18 by daugier           #+#    #+#              #
#    Updated: 2016/05/21 16:49:51 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEAD = libft.h

SRC = ft_atoi.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_isdigit.c \
	  ft_memcpy.c \
	  ft_strncat.c \
	  ft_strstr.c \
	  ft_bzero.c \
	  ft_isprint.c \
	  ft_memmove.c \
	  ft_strcpy.c \
	  ft_tolower.c \
	  ft_isalnum.c \
	  ft_memccpy.c \
	  ft_memset.c \
	  ft_strdup.c \
	  ft_strncpy.c \
	  ft_toupper.c \
	  ft_isalpha.c \
	  ft_memchr.c \
	  ft_strcat.c \
	  ft_strlcat.c \
	  ft_strnstr.c \
	  ft_isascii.c \
	  ft_memcmp.c \
	  ft_strchr.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_strclr.c \
	  ft_striteri.c \
	  ft_strmapi.c \
	  ft_strsub.c \
	  ft_itoa.c \
	  ft_putchar_fd.c \
	  ft_putnbr_fd.c \
	  ft_strdel.c \
	  ft_strjoin.c \
	  ft_strnequ.c \
	  ft_strtrim.c \
	  ft_memalloc.c \
	  ft_putendl.c \
	  ft_putstr.c \
	  ft_strequ.c \
	  ft_strnew.c \
	  ft_memdel.c \
	  ft_putendl_fd.c \
	  ft_putstr_fd.c \
	  ft_striter.c \
	  ft_strmap.c \
	  ft_strsplit.c \
	  ft_lstadd.c \
	  ft_lstat.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstnew.c \
	  ft_charjoin.c \

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(HEAD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean
	make
