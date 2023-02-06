/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:46:09 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/06 13:58:51 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_fill_tab(int ac, char **av)
{
	int		*tab_index;
	int		*tab_int;

	 if (ac == 2)
	 	ac = ft_count_before_split(av);
	tab_int = malloc(sizeof(int) * ac);
	if (!tab_int)
		return (1);
	tab_index = ft_convert_to_index(ac, av, tab_int);
	if (!tab_index)
	{
		free (tab_int);
		return (1);
	}
	int i;
	i = 0;
	while (tab_int[i])
	{
		ft_printf("%d \n", tab_index[i]);
		i++;
	}
	return (0);
}

int	*ft_convert_to_index(int ac, char **av, int *tab_int)
{
	char	**tab_char;
	int		*tab_index;
	int		i;

	if (ac <= 2)
	{
		tab_char = ft_split(av[1], ' '); // need to protect the malloc
		ac = ft_count_ac(tab_char);
	}
	else
		tab_char = av + 1;
	i = -1;
	while (tab_char[++i])
		tab_int[i] = ft_atoi(tab_char[i]);
	if (have_same_numbers(ac, tab_int))
		return (NULL);
	tab_index = ft_fill_index(ac, tab_int);
	if (!tab_index)
		return (NULL);
	return (tab_index);
}

int	*ft_fill_index(int ac, int *tab_int)
{
	int	i;

	tab_int = malloc(sizeof(int) * ac);
	if (!tab_int)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab_int[i] = ft_found_index(tab_int, i, ac);
		i++;
	}
	return (tab_int);
}

int	ft_found_index(int *tab, int i, int ac)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (j < ac)
	{
		if (tab[j] < tab[i] && i != j && tab[j] != 0)
			count++;
		j++;
	}
	return (count);
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

