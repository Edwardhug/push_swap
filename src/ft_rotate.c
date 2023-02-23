/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:04:23 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/23 19:10:03 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_stack **a)
{
	t_stack	*new_last;

	new_last = ft_stacknew((*a)->num, (*a)->size);
	if (!new_last)
		return ;
	ft_stackadd_back(a, new_last);
	*a = (*a)->next;	// may have some leaks because first node didn't free
}

void	ft_rb(t_stack **a)
{
	t_stack	*new_last;

	new_last = ft_stacknew((*a)->num, (*a)->size);
	if (!new_last)
		return ;
	ft_stackadd_back(a, new_last);
	*a = (*a)->next;	// may have some leaks because first node didn't free
}