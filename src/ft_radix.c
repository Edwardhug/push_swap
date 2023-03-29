/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:58:23 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 21:06:40 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_radix(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	j;

	size = ft_get_size_stack(*a);
	i = 0;
	while (!ft_is_ordered(*a))
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->num >> i) & 1) == 1)
			{
				if (ft_ra(a) == 1)
					return ;
			}
			else
				ft_pb(a, b);
			j++;
		}
		while (ft_get_size_stack(*b) != 0)
			ft_pa(a, b);
		i++;
	}
}
