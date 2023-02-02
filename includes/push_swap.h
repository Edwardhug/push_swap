/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:52 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/02 19:32:01 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/ft_printf.h"
# include "../libft/libft/includes/libft.h"

typedef struct s_list
{
	int				num;
	struct s_list	*next;
	int				size;
}				t_list;

int	have_error(int ac, char **av);
int	have_no_number_charac(int ac, char **av);
int	have_space(char **av);
int	*ft_fill_tab(int ac, char **av);

#endif
