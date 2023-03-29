/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:36:57 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 20:23:03 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_ordered(t_stack *a)
{
	t_stack	*next;

	next = a->next;
	while (next)
	{
		if (a->num == next->num - 1)
		{
			a = a->next;
			next = next->next;
		}
		else
			return (0);
	}
	return (1);
}
