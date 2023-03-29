/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:39:34 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 20:20:43 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_stack *stack)
{
	t_stack	*node;
	int		tamp;
	int		size;

	size = ft_get_size_stack(stack);
	if (stack == NULL || size == 1)
		return ;
	node = stack;
	node = node->next;
	tamp = stack->num;
	stack->num = node->num;
	node->num = tamp;
	ft_printf("sa\n");
}

void	ft_sb(t_stack *stack)
{
	t_stack	*node;
	int		tamp;
	int		size;

	size = ft_get_size_stack(stack);
	if (stack == NULL || size == 1)
		return ;
	node = stack;
	node = node->next;
	tamp = stack->num;
	stack->num = node->num;
	node->num = tamp;
	ft_printf("sb\n");
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*node;
	int		tamp;
	int		size_a;
	int		size_b;

	size_b = ft_get_size_stack(stack_a);
	size_a = ft_get_size_stack(stack_b);
	if (stack_a == NULL || size_a == 1
		|| stack_b == NULL || size_b == 1)
		return ;
	node = stack_a;
	node = node->next;
	tamp = stack_a->num;
	stack_a->num = node->num;
	node->num = tamp;
	node = stack_b;
	node = node->next;
	tamp = stack_b->num;
	stack_b->num = node->num;
	node->num = tamp;
	ft_printf("ss\n");
}
