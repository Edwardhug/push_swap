# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 10:38:36 by lgabet            #+#    #+#              #
#    Updated: 2023/01/31 19:06:52 by lgabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
FT_PRINTF	= ft_printf
# SRCS	= 


INCLUDES = includes/push_swap.h
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