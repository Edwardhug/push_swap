/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:40:01 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/23 18:09:37 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*tamp;

	if (*b == NULL)
		return (1);
	tamp = *b;
	tamp = tamp->next;
	ft_stackadd_front(a, *b);
	*b = tamp;
	ft_fill_size_stack(*a);
	ft_fill_size_stack(*b);
	ft_printf("pa\n");
	return (0);
}

int	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*tamp;

	if (*a == NULL)
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
