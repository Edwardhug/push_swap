/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:04:23 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 12:08:47 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_stack **a)
{
	t_stack	*new_last;
	t_stack *head;
	int size;

	head = *a;
	size = ft_get_size_stack(*a);
	if (!(*a) || size <= 1)
		return ;
	new_last = ft_stacknew((*a)->num);
	if (!new_last)
		return ;
	ft_stackadd_back(a, new_last);
	*a = (*a)->next;	// may have some leaks because first node didn't free
	free(head);
	ft_printf("ra\n");
}

void	ft_rb(t_stack **a)
{
	t_stack	*new_last;
	t_stack *head;
	int size;

	head = *a;
	size = ft_get_size_stack(*a);
	if (!(*a) || size <= 1)
		return ;
	new_last = ft_stacknew((*a)->num);
	if (!new_last)
		return ;
	ft_stackadd_back(a, new_last);
	*a = (*a)->next;	// may have some leaks because first node didn't free
	free(head);
	ft_printf("rb\n");
}

void	ft_reverse_without_print(t_stack **a)
{
	t_stack	*new_last;
	t_stack *head;
	int size;

	head = *a;
	size = ft_get_size_stack(*a);
	if (!(*a) || size <= 1)
		return ;
	new_last = ft_stacknew((*a)->num);
	if (!new_last)
		return ;
	ft_stackadd_back(a, new_last);
	free(head);
	*a = (*a)->next;	// may have some leaks because first node didn't free
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_reverse_without_print(a);
	ft_reverse_without_print(b);
	ft_printf("rr\n");
}