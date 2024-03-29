/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:52 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/05 11:51:46 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}				t_stack;

int		have_error_ps(int ac, char **av);
int		have_no_number_charac(int ac, char **av);
int		have_space(char **av);
t_stack	*ft_fill_tab(int ac, char **av);
int		*ft_convert_to_index(int ac, char **av);
int		*ft_fill_index(int ac, int *tab_int);
int		ft_found_index(int *tab, int i, int ac);
int		have_same_numbers(int ac, int *tab);
int		ft_count_ac(char **str);
t_stack	*ft_from_tab_to_stack(int *tab);
t_stack	*ft_stacknew(int content);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_stacklast(t_stack *lst);
void	ft_sa(t_stack *stack);
t_stack	*ft_stack_maker(int ac, char **av, t_stack *a);
int		ft_have_nothing_to_do(int ac, char **av);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
int		ft_get_size_stack(t_stack *stack);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_stackadd_front(t_stack **lst, t_stack *new);
t_stack	*ft_last_node(t_stack *lst);
int		ft_ra(t_stack **a);
int		ft_rb(t_stack **a);
int		ft_reverse_without_print(t_stack **a);
int		ft_rr(t_stack **a, t_stack **b);
int		ft_extract_last_num(t_stack *stack);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **a);
void	ft_reverse_rotate_without_print(t_stack **a);
void	ft_rrr(t_stack **a, t_stack **b);
int		ft_atoi_error(char *s);
int		*ft_convert_char_to_int(int i, char **tab_char, int *tab_int);
char	*ft_join_every_arg(int ac, char **av);
int		ft_is_ordered(t_stack *a);
void	ft_push_swap(t_stack **a, t_stack **b);
void	ft_small_list(t_stack **a, t_stack **b);
void	ft_three_numbers(t_stack **a);
int		ft_get_min(t_stack *a);
int		ft_get_max(t_stack *a);
int		ft_get_distance(t_stack *a, int to_find);
void	ft_four_numbers(t_stack **a, t_stack **b);
void	ft_five_numbers(t_stack **a, t_stack **b);
void	ft_radix(t_stack **a, t_stack **b);
void	ft_free_list(t_stack *a);
void	ft_free_tab_char(char **str);
char	*ft_strjoin_free(char *s1, char *s2);
int		ft_strlen_error(char *str);
char	**ft_make_tab_char(int ac, char **av);
int		ft_too_long(int ac, char **tab_char);

void	ft_print_list(t_stack *a);

#endif
