/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:56 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/24 17:16:43 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	have_error(int ac, char **av)
{
	if (have_no_number_charac(ac, av) == 1)
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
			if ((av[i][j] == '-' || av[i][j] == '+')
				&& (av[i][j + 1] < '0' || av[i][j + 1] > '9'))
				return (1);
			if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != ' '
				&& av[i][j] != '-' && av[i][j] != '+')	
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

int	have_same_numbers(int ac, int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (tab[i] == tab[j] && i != j)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_error(const char *cs)
{
	int					i;
	int					a;
	int		r;
	char				*s;

	s = (char *)cs;
	i = ft_whitespace(s);
	a = 1;
	r = 0;
	if (s[i] == '-' || s[i] == '+')
	{	
		if (s[i] == '-')
			a = a * (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (r != ((r * 10 + (a * (s[i] - 48))) / 10))
			return (0);
		r = (s[i] - '0') + r * 10;
		i++;
	}
	r = r * a;
	return (r);
}
