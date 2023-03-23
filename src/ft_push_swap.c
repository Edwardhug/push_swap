/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:51:43 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/23 16:51:25 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_swap(t_stack **a, t_stack **b)
{
	if ((*a)->size <= 5)
		ft_small_list(a, b);
	// else
		// ft_big_list(a, b);
}

void	ft_small_list(t_stack **a, t_stack **b)
{
	if ((*a)->size == 2)
	{
		(void)b;
		ft_sa(*a);
		return ;
	}
	if ((*a)->size == 3)
	{
		(void)b;
		ft_three_numbers(a);
		return ;
	}
}

void	ft_three_numbers(t_stack **a)
{
	t_stack	*next;

	next = (*a)->next;
	if ((*a)->num == 2 && next->num == 3)
		ft_rra(a);
	else if ((*a)->num == 3 && next->num == 2)
	{
		ft_sa(*a);
		ft_rra(a);
	}
	else if ((*a)->num == 3 && next->num == 1)
		ft_ra(a);
	else if ((*a)->num == 1 && next->num == 3)
	{
		ft_sa(*a);
		ft_ra(a);
	}
	else if ((*a)->num == 2 && next->num == 1)
		ft_sa(*a);
}