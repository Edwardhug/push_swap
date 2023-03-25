/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_to_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:59:00 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/25 14:47:19 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_min(t_stack *a)
{
	int	value;

	value = a->num;
	while (a)
	{
		if (a->num < value)
			value = a->num;
		a = a->next;
	}
	return (value);
}

int	ft_get_max(t_stack *a)
{
	int	value;

	value = a->num;
	while (a)
	{
		if (a->num > value)
			value = a->num;
		a = a->next;
	}
	return (value);
}

int	ft_get_distance(t_stack *a, int to_find)
{
	int	distance;

	distance = 0;
	while (a)
	{
		if (a->num == to_find)
			break ;
		a = a->next;
		distance++;
	}
	return (distance);
}