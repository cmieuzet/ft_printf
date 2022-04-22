# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 17:08:03 by cmieuzet          #+#    #+#              #
#    Updated: 2022/04/21 23:46:17 by cmieuzet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c \
		ft_functions.c \
		ft_puthexa.c

OBJS	= ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -f prog *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
