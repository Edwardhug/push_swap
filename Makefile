# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 10:38:36 by lgabet            #+#    #+#              #
#    Updated: 2023/01/31 10:42:10 by lgabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= src/ft_printchar.c\
src/ft_printstr.c\
src/ft_printf.c\
src/ft_printaddress.c\
src/ft_printnbr.c\
src/ft_print_unsigned.c\
src/ft_print_hexa.c\
src/ft_itoa.c\
src/ft_unsigned_itoa.c\
src/ft_itoa_x.c


INCLUDES = includes/ft_printf.h
OBJS= ${SRCS:.c=.o}

all: $(NAME)

%.o : %.c $(INCLUDES)
		$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
	
$(NAME) : $(OBJS) $(INCLUDES)
	ar -rcs $(NAME) $(OBJS) $(INCLUDES)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re bonus clean fclean