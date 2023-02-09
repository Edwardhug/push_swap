/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:52 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/09 10:50:23 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/ft_printf.h"
# include "../libft/libft/includes/libft.h"

typedef struct s_stack
{
	int				num;
	struct s_list	*next;
	int				size;
}				t_stack;

int		have_error(int ac, char **av);
int		have_no_number_charac(int ac, char **av);
int		have_space(char **av);
int		ft_fill_tab(int ac, char **av);
int		*ft_convert_to_index(int ac, char **av, int *tab_int);
int		*ft_fill_index(int ac, int *tab_int);
int		ft_found_index(int *tab, int i, int ac);
int		have_same_numbers(int ac, int *tab);
int 	ft_count_ac(char **str);
int 	ft_count_before_split(char **av);

#endif
