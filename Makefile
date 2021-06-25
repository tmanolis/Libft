# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 17:49:56 by tmanolis          #+#    #+#              #
#    Updated: 2021/06/25 15:14:43 by tmanolis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c  \
	ft_bzero.c 		\
	ft_memcpy.c		\
	ft_memccpy.c	\
	ft_memmove.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strlen.c		\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c		\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_strnstr.c	\
	ft_atoi.c		\
	ft_calloc.c		\
	ft_strdup.c		\
	ft_substr.c		\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c		\
	ft_itoa.c 		\
	ft_strmapi.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\

BONUS = ft_lstnew.c			\
		ft_lstadd_front.c	\
		

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${BONUS:.c=.o}

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

bonus:		${OBJS} ${OBJS_BONUS}
			${LINK} ${NAME} ${OBJS} ${OBJS_BONUS}

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

.PHONY:		all clean fclean re test bonus