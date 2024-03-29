/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:40:01 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 15:08:00 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*tamp;

	if (*b == NULL)
		return ;
	tamp = *b;
	tamp = tamp->next;
	ft_stackadd_front(a, *b);
	*b = tamp;
	ft_printf("pa\n");
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*tamp;

	if (*a == NULL)
		return ;
	tamp = *a;
	tamp = tamp->next;
	ft_stackadd_front(b, *a);
	*a = tamp;
	ft_printf("pb\n");
}
