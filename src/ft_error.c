/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:56 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/01 16:35:06 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	have_error(int ac, char **av)
{
	if (ac == 1)
		return (1);
	else if (have_no_number_charac(ac, av) == 1)
		return (1);
	else if (ac > 2 && have_space(av) == 1)
		return (1);
	return (0);
}

int	have_no_number_charac(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	have_space(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_strchr(av[i], ' ') != NULL)
			return (1);
		i++;
	}
	return (0);
}
