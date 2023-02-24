/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:04:45 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/24 14:18:22 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_rra(t_stack **a)
{
	int	last_num;
	int	tamp_a;
	int tamp_b;
	t_stack	*stack;

	if (!(*a) || (*a)->size <= 1)
		return ;
	last_num = ft_extract_last_num(*a);
	stack = *a;
	tamp_b = stack->num;
	while (stack->next)
	{
		tamp_a = tamp_b;
		stack = stack->next;
		tamp_b = stack->num;
		stack->num = tamp_a;
	}
	(*a)->num = last_num;
	ft_printf("rra\n");
}

void ft_rrb(t_stack **a)
{
	int	last_num;
	int	tamp_a;
	int tamp_b;
	t_stack	*stack;

	if (!(*a) || (*a)->size <= 1)
		return ;
	last_num = ft_extract_last_num(*a);
	stack = *a;
	tamp_b = stack->num;
	while (stack->next)
	{
		tamp_a = tamp_b;
		stack = stack->next;
		tamp_b = stack->num;
		stack->num = tamp_a;
	}
	(*a)->num = last_num;
	ft_printf("rrb\n");
}

void ft_reverse_rotate_without_print(t_stack **a)
{
	int	last_num;
	int	tamp_a;
	int tamp_b;
	t_stack	*stack;

	if (!(*a) || (*a)->size <= 1)
		return ;
	last_num = ft_extract_last_num(*a);
	stack = *a;
	tamp_b = stack->num;
	while (stack->next)
	{
		tamp_a = tamp_b;
		stack = stack->next;
		tamp_b = stack->num;
		stack->num = tamp_a;
	}
	(*a)->num = last_num;
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate_without_print(a);
	ft_reverse_rotate_without_print(b);
	ft_printf("rrr\n");
}