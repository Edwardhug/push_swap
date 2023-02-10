/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:40:01 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/10 16:19:05 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack *stack_b)
{
	t_stack	*node;

	if (stack_b == NULL)
		return ;
	node = malloc(sizeof(t_stack *));
	if (!node)
		return ;
	node->num = stack_b->num;
	node->next = *stack_a;
	*stack_a = node;
	stack_b = NULL;
	ft_fill_size_stack(*stack_a);
	ft_fill_size_stack(stack_b);
	ft_printf("pa\n");
	free(node);
}

void	ft_pb(t_stack **stack_a, t_stack *stack_b)
{
	t_stack	*node;

	if (stack_b == NULL)
		return ;
	node = malloc(sizeof(t_stack *));
	if (!node)
		return ;
	node->num = stack_b->num;
	node->next = *stack_a;
	*stack_a = node;
	stack_b = NULL;
	ft_fill_size_stack(*stack_a);
	ft_fill_size_stack(stack_b);
	ft_printf("pb\n");
	free(node);
}