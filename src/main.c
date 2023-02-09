/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/09 12:05:52 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	// t_list	*b;

	if (have_error(ac, av) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	a = ft_fill_tab(ac, av);
	if(!a)
	{
		write(2, "Error\n", 6);
		return (1);
	}

	while (a)
	{
		ft_printf("%d\n", a->num);
		a = a->next;
	}
	
	return (0);
}
