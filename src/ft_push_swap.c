/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:51:43 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/22 15:01:11 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_swap(t_stack *a, t_stack *b)
{
	if (a->size <= 5)
		ft_small_list(a, b);
	// else
		// ft_big_list(a, b);
}

void	ft_small_list(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		(void)b;
		if (!ft_is_ordered(a))
			ft_sa(a);
		return ;
	}
}