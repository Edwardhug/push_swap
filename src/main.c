/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/10 13:20:42 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	// t_list	*b;

	a = NULL;
	a = ft_stack_maker(ac, av, a);
	if (!a)
		return (1);

	ft_sa(&a);
	while (a)
	{
		ft_printf("%d\n", a->num);
		a = a->next;
	}
	
	return (0);
}
