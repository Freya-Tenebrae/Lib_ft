# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 23:11:43 by cmaginot          #+#    #+#              #
#    Updated: 2021/04/17 03:48:58 by cmaginot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET=libft.a
SRC=$(addprefix ${FOLDER}/, ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
							ft_atoi.c)
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