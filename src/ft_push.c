/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:40:01 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/23 14:00:56 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	ft_pa(t_stack **stack_a, t_stack *stack_b)
// {
// 	t_stack	*node;

// 	if (stack_b == NULL)
// 		return (1);
// 	node = malloc(sizeof(t_stack *));
// 	if (!node)
// 		return (1);
// 	node->num = stack_b->num;
// 	node->next = *stack_a;
// 	*stack_a = node;
// 	stack_b = NULL;
// 	ft_fill_size_stack(*stack_a);
// 	ft_fill_size_stack(stack_b);
// 	ft_printf("pa\n");
// 	free(node);
//     return (0);
// }

int	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*tamp;
	
	if (*a == NULL)
		return (1);
	tamp = malloc(sizeof(t_stack *));
	if (!tamp)
		return (1);
	tamp = *a;
	tamp = tamp->next;
	ft_stackadd_front(b, *a);
	*a = tamp;
	ft_fill_size_stack(*a);
	ft_fill_size_stack(*b);
	ft_printf("pb\n");
	return (0);
}