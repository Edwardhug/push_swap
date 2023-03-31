# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 10:38:36 by lgabet            #+#    #+#              #
#    Updated: 2023/03/31 13:45:49 by lgabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
# PATH_LIB	= Libft/
# LIBA		= libft.a
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
src/ft_free.c\
Libft/ft_isascii.c\
Libft/ft_memset.c\
Libft/ft_strnstr.c\
Libft/ft_isdigit.c\
Libft/ft_strchr.c\
Libft/ft_strrchr.c\
Libft/ft_atoi.c\
Libft/ft_isprint.c\
Libft/ft_strdup.c\
Libft/ft_tolower.c\
Libft/ft_bzero.c\
Libft/ft_memchr.c\
Libft/ft_strlcat.c\
Libft/ft_toupper.c\
Libft/ft_calloc.c\
Libft/ft_memcmp.c\
Libft/ft_strlcpy.c\
Libft/ft_isalnum.c\
Libft/ft_memcpy.c\
Libft/ft_strlen.c\
Libft/ft_isalpha.c\
Libft/ft_memmove.c\
Libft/ft_strncmp.c\
Libft/ft_substr.c\
Libft/ft_strjoin.c\
Libft/ft_strtrim.c\
Libft/ft_split.c\
Libft/ft_itoa.c\
Libft/ft_strmapi.c\
Libft/ft_striteri.c\
Libft/ft_putchar_fd.c\
Libft/ft_putstr_fd.c\
Libft/ft_putendl_fd.c\
Libft/ft_putnbr_fd.c\
Libft/ft_lstnew.c\
Libft/ft_lstadd_front.c\
Libft/ft_lstsize.c\
Libft/ft_lstlast.c\
Libft/ft_lstadd_back.c\
Libft/ft_lstdelone.c\
Libft/ft_lstclear.c\
Libft/ft_lstiter.c\
Libft/ft_lstmap.c\
Libft/get_next_line_bonus.c\
Libft/get_next_line_utils_bonus.c\
Libft/ft_printchar.c\
Libft/ft_printstr.c\
Libft/ft_printf.c\
Libft/ft_printaddress.c\
Libft/ft_printnbr.c\
Libft/ft_print_unsigned.c\
Libft/ft_print_hexa.c\
Libft/ft_unsigned_itoa.c\
Libft/ft_itoa_x.c

INCLUDES = includes/push_swap.h\
Libft/libft.h
OBJS= ${SRCS:.c=.o}

all: $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
	
# $(LIBA) : FORCE
# 	@make -C $(PATH_LIB)

$(NAME) : $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

FORCE:

clean:
	rm -f ${OBJS}
#	@make clean -C $(PATH_LIB)

fclean: clean
	rm -f $(NAME)
#	@make fclean -C $(PATH_LIB)

re: fclean all

.PHONY: all re bonus clean fclean