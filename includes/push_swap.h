/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:52 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/23 17:44:58 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/ft_printf.h"
# include "../libft/libft/includes/libft.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
	int				size;
}				t_stack;

int		have_error(int ac, char **av);
int		have_no_number_charac(int ac, char **av);
int		have_space(char **av);
t_stack	*ft_fill_tab(int ac, char **av);
int		*ft_convert_to_index(int ac, char **av, int *tab_int);
int		*ft_fill_index(int ac, int *tab_int);
int		ft_found_index(int *tab, int i, int ac);
int		have_same_numbers(int ac, int *tab);
int		ft_count_ac(char **str);
int		ft_sizetab_int(int *tab);
t_stack	*ft_from_tab_to_stack(int *tab);
t_stack	*ft_stacknew(int content, int size);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_stacklast(t_stack *lst);
void	ft_sa(t_stack *stack);
t_stack	*ft_stack_maker(int ac, char **av, t_stack *a);
int		ft_have_nothing_to_do(int ac, char **av);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_fill_size_stack(t_stack *stack);
int	    ft_pa(t_stack **stack_a, t_stack **stack_b);
int	    ft_pb(t_stack **stack_a, t_stack **stack_b);
void    ft_stackadd_front(t_stack **lst, t_stack *new);

#endif
