# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 23:11:43 by cmaginot          #+#    #+#              #
#    Updated: 2021/04/17 22:06:17 by cmaginot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET=libft.a
SRC=$(addprefix ${FOLDER}/, ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
							ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
							ft_isalpha.c ft_isdigit.c ft_isalnum.c \
							ft_isascii.c ft_isprint.c ft_toupper.c \
							ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
							ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
							ft_calloc.c ft_strdup.c\
							\
							ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
							ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
							ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
							\
							\
							\
							ft_swap.c ft_isnumber.c ft_isupper.c ft_islower.c \
							ft_isblank.c ft_isspace.c ft_memrchr.c ft_strcmp.c \
							ft_strncpy.c ft_strcpy.c ft_strncat.c ft_strcat.c \
							ft_strstr.c ft_strndup.c ft_putchar.c ft_putstr.c \
							ft_putendl.c ft_putnbr.c)
OBJS=${SRC:.c=.o}

HEADER=includes
FOLDER=srcs

CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all: ${TARGET}

${TARGET}: ${OBJS}
	ar -rcs ${TARGET} ${OBJS}

%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} libft.a

re: fclean all

cmain:
	${CC} ${CFLAGS} main.c ${TARGET}

test: cmain
	./a.out

retest: re test