/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_maker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:37:08 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/23 17:33:06 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stack_maker(int ac, char **av, t_stack *a)
{
	if (ft_have_nothing_to_do(ac, av) == 1)
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

int	ft_have_nothing_to_do(int ac, char **av)
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

void	ft_fill_size_stack(t_stack *stack)
{
	int		i;
	t_stack	*start;

	start = stack;
	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		i++;
	}
	while (start != NULL)
	{
		start->size = i;
		start = start->next;
	}
}
