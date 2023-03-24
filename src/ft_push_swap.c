/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:51:43 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/24 17:08:06 by lgabet           ###   ########.fr       */
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
	if ((*a)->size == 4)
	{
		(void)b;
		ft_four_numbers(a, b);
		return ;
	}
}

void	ft_three_numbers(t_stack **a)
{
	t_stack	*next;
	int		min;
	int		max;

	min = ft_get_min(*a);
	max = ft_get_max(*a);
	next = (*a)->next;
	if ((*a)->num != min && next->num == max)
		ft_rra(a);
	else if ((*a)->num == max && next->num != min)
	{
		ft_sa(*a);
		ft_rra(a);
	}
	else if ((*a)->num == max && next->num == min)
		ft_ra(a);
	else if ((*a)->num == min && next->num == max)
	{
		ft_sa(*a);
		ft_ra(a);
	}
	else if ((*a)->num !=min && next->num == min)
		ft_sa(*a);
}

void	ft_four_numbers(t_stack **a, t_stack **b)
{
	int distance;
	
	distance = ft_get_distance(*a, ft_get_min(*a));
	if (distance == 1)
		ft_sa(*a);
	else if (distance == 2)
	{
		ft_ra(a);
		ft_sa(*a);
	}
	else if (distance == 3)
		ft_rra(a);
	if (ft_is_ordered(*a))
		return ;
	ft_pb(a, b);
	ft_three_numbers(a);
	ft_pa(a, b);
}