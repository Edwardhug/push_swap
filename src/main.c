/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/08 10:37:07 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	int	a;
	// t_list	*b;

	if (have_error(ac, av) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// ft_printf("%s\n", "yooooo");
	a = ft_fill_tab(ac, av);
	// ft_printf("%d\n", a);
	if(a == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
