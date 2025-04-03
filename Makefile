# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbaldes <nbaldes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 10:03:57 by utilisateur       #+#    #+#              #
#    Updated: 2025/04/03 15:44:22 by nbaldes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f

SRC = \
src/ft_atoi.c \
src/ft_bzero.c \
src/ft_calloc.c \
src/ft_isalnum.c \
src/ft_isalpha.c \
src/ft_isascii.c \
src/ft_isdigit.c \
src/ft_isprint.c \
src/ft_itoa.c \
src/ft_memchr.c \
src/ft_memcmp.c \
src/ft_memcpy.c \
src/ft_memmove.c \
src/ft_memset.c \
src/ft_putchar_fd.c \
src/ft_putendl_fd.c \
src/ft_putnbr_fd.c \
src/ft_putstr_fd.c \
src/ft_split.c \
src/ft_strchr.c \
src/ft_strdup.c \
src/ft_striteri.c \
src/ft_strjoin.c \
src/ft_strlcat.c \
src/ft_strlcpy.c \
src/ft_strlen.c \
src/ft_strmapi.c \
src/ft_strncmp.c \
src/ft_strnstr.c \
src/ft_strrchr.c \
src/ft_strtrim.c \
src/ft_substr.c \
src/ft_tolower.c \
src/ft_toupper.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)
re:fclean all

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@
