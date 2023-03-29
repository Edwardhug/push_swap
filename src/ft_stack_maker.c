/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_maker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:37:08 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/29 11:06:30 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stack_maker(int ac, char **av, t_stack *a)
{
	if (ft_have_nothing_to_do(ac, av))
		return (NULL);
	if (have_error(ac, av) == 1)
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	a = ft_fill_tab(ac, av);
	if (!a)
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	return (a);
}

int	ft_have_nothing_to_do(int ac, char **av) // don't know the aim of this fonction, used line 17
{
	char	**str;

	if (ac == 1)
		return (1);
	str = ft_split(av[1], ' ');
	if (!str)
		return (1);
	if (ac == 2 && ft_count_ac(str) == 1)
	{
		free(str);
		return (1);
	}
	free(str);
	return (0);
}

int	ft_get_size_stack(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
