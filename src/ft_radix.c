/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:58:23 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 16:49:16 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_radix(t_stack **a, t_stack **b)
{
	int	i;
	t_stack	*head_a;

	head_a = *a;
	while (!ft_is_ordered(*a))
	{
		i = 0;
		while (*a)
		{
			if ((*a)->num >> i)
			{
				while (!ft_is_first(*a, (*a)->num))
					ft_ra(a);
				ft_pb(a, b);
			}
			(*a) = (*a)->next;
		}
		while (ft_get_size_stack(*b) != 0)
			ft_pa(a, b);
		(*a) = head_a;
	}
}

int	ft_is_first(t_stack *a, int num)
{
	if (a->num == num)
		return (1);
	else
		return (0);
}