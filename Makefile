# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 14:54:58 by tmanolis          #+#    #+#              #
#    Updated: 2021/05/25 14:54:33 by tmanolis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c		\
	   ft_isalpha.c		\
	   ft_isdigit.c		\
	   ft_isalnum.c		\

OBJS = ${SRCS:.c=.o}

NAME = libft.a

LINK = ar rc

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${LINK} ${NAME} ${OBJS}

all:		${NAME}

test:		all
			${CC} ${CFLAGS} main.c -L. -lft
			./a.out

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

tclean:		fclean
			${RM} a.out

re:			fclean all

retest:		tclean test

.PHONY:		all clean fclean re test
