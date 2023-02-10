/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:09:15 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/10 12:31:07 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_stack **stack)
{
	t_stack	*node;
	t_stack	*ad_stack;
	int		tamp;

	ad_stack = *stack;
	if (ad_stack == NULL || ad_stack->size == 1)
		return ;
	node = ad_stack;
	node = node->next;
	tamp = ad_stack->num;
	ad_stack->num = node->num;
	node->num = tamp;
	ft_printf("sa\n");
}