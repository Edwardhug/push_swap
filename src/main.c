/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 11:07:02 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	a = ft_stack_maker(ac, av, a);
	if (!a)
		return (1);
	if (ft_is_ordered(a))
		return (0);
	ft_push_swap(&a, &b);
	ft_print_list(a);
	ft_free_list(a);
	return (0);
}

void	ft_print_list(t_stack *a)
{
	while (a)
	{
		ft_printf("%d ", a->num);
		a = a->next;
	}
	ft_printf("\n");
}
