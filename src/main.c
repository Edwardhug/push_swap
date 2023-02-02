/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/02 19:48:54 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if(!(a = ft_fill_tab(ac, av)))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// if (have_error(ac, av) == 1)
	// {
	// 	write(2, "Error\n", 6);
	// 	return (1);
	// }
	return (0);
}
