/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:58:23 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 15:22:55 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_radix(t_stack **a, t_stack **b)
{
	// int	i;
	// int	j;
	int	max_number_of_bits;

	max_number_of_bits = ft_get_number_of_bits(*a);
	ft_printf("%d\n", max_number_of_bits);
	(void)b;
}