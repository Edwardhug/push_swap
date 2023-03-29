/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:04:23 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 21:05:14 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_ra(t_stack **a)
{
	t_stack	*new_last;
	t_stack	*head;
	int		size;

	head = *a;
	size = ft_get_size_stack(*a);
	if (!(*a) || size <= 1)
		return (0);
	new_last = ft_stacknew((*a)->num);
	if (!new_last)
		return (1);
	ft_stackadd_back(a, new_last);
	*a = (*a)->next;
	free(head);
	ft_printf("ra\n");
	return (0);
}

int	ft_rb(t_stack **a)
{
	t_stack	*new_last;
	t_stack	*head;
	int		size;

	head = *a;
	size = ft_get_size_stack(*a);
	if (!(*a) || size <= 1)
		return (0);
	new_last = ft_stacknew((*a)->num);
	if (!new_last)
		return (1);
	ft_stackadd_back(a, new_last);
	*a = (*a)->next;
	free(head);
	ft_printf("rb\n");
	return (0);
}

int	ft_reverse_without_print(t_stack **a)
{
	t_stack	*new_last;
	t_stack	*head;
	int		size;

	head = *a;
	size = ft_get_size_stack(*a);
	if (!(*a) || size <= 1)
		return (0);
	new_last = ft_stacknew((*a)->num);
	if (!new_last)
		return (1);
	ft_stackadd_back(a, new_last);
	free(head);
	*a = (*a)->next;
	return (0);
}

int	ft_rr(t_stack **a, t_stack **b)
{
	if (ft_reverse_without_print(a) == 1)
		return (1);
	if (ft_reverse_without_print(b))
		return (1);
	ft_printf("rr\n");
	return (0);
}
