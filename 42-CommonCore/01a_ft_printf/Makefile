# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccalvo-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 12:39:39 by ccalvo-p          #+#    #+#              #
#    Updated: 2022/09/15 12:39:43 by ccalvo-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Exit (Salida)
NAME		= 	libftprintf.a

#Sources (Fuentes)
SRCS		= 	ft_printf.c \
				ft_numbers.c \
				ft_words.c

OBJS		= 	$(SRCS:.c=.o)

#Compilation (Compilacion)
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -g

#Default target (Objetivo por defecto)
all:		$(NAME)

#Linking
$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

#Cleaning objects (Eliminacion de objetos)
clean:
			rm -f $(OBJS)

#Cleaning objects and executable (Eliminacion de objetos y ejecutable)
fclean:		clean
			rm -f $(NAME)

#Cleaning all and then compilation (Eliminacion de todo y despues compilacion)
re:			fclean all

#Exectute no matter name is (.Phony)
.PHONY: all clean fclean re
