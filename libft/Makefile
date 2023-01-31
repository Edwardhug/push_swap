# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 12:15:56 by lgabet            #+#    #+#              #
#    Updated: 2023/01/31 15:34:15 by lgabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
LIBFT	= libft
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
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS) $(INCLUDES)

clean:
	rm -f ${OBJS}
	@make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all re bonus clean fclean