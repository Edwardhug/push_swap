# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 10:38:36 by lgabet            #+#    #+#              #
#    Updated: 2023/03/29 11:01:37 by lgabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIBFT	= libft
SRCS	= src/main.c\
src/ft_error.c\
src/ft_make_tab.c\
src/ft_count_ac.c\
src/utils_list.c\
src/ft_stack_maker.c\
src/ft_swap.c\
src/ft_push.c\
src/ft_rotate.c\
src/ft_reverse_rotate.c\
src/ft_convert_char_to_int.c\
src/ft_check_order.c\
src/ft_push_swap.c\
src/utils_to_get.c\
src/ft_radix.c\
src/ft_free.c

INCLUDES = includes/push_swap.h
OBJS= ${SRCS:.c=.o}

all: $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
	
$(NAME) : $(OBJS) $(INCLUDES)
	@make -C $(LIBFT)
	@cp libft/libftprintf.a .
	@mv libftprintf.a $(NAME)
	$(CC) $(CFLAGS) $(OBJS) libft/libftprintf.a -o $(NAME)

clean:
	rm -f ${OBJS}
	@make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all re bonus clean fclean