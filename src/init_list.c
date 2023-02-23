/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:38:19 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/23 17:34:50 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stacknew(int content, int size)
{
	t_stack	*list;

	list = (t_stack *)malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->num = content;
	list->size = size;
	list->next = (NULL);
	return (list);
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_stacklast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

t_stack	*ft_stacklast(t_stack *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
