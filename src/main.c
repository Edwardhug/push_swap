/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/24 13:00:43 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	// (void) b;
	a = ft_stack_maker(ac, av, a);
	if (!a)
		return (1);
	ft_rr(&a, &b);
	while (a)
	{
		ft_printf("%d\n", a->num);
		a = a->next;
	}
	while (b)
	{
		ft_printf("%d\n", b->num);
		b = b->next;
	}
	return (0);
}
