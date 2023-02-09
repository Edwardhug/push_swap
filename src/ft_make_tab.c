/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:46:09 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/09 12:03:11 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_fill_tab(int ac, char **av)
{
	int		*tab_index;
	int		*tab_int;
	t_stack	*stack;

	tab_int = malloc(sizeof(int) * ac);
	if (!tab_int)
		return (NULL);
	tab_index = ft_convert_to_index(ac, av, tab_int);
	if (!tab_index)
	{
		free (tab_int);
		return (NULL);
	}
	stack = ft_from_tab_to_stack(tab_index);
	if (!stack)
		return (NULL);
	return (stack);


	// print the tab :
	
	// int i;
	// i = 0;
	// while (i < ac)
	// {
	// 	ft_printf("%d \n", tab_index[i]);
	// 	i++;
	// }

	// end of printer
	
	return (0);
}

int	*ft_convert_to_index(int ac, char **av, int *tab_int)
{
	char	**tab_char;
	int		*tab_index;
	int		i;

	if (ac == 2)
	{
		tab_char = ft_split(av[1], ' ');
		if (!tab_char)
			return (NULL);
		ac = ft_count_ac(tab_char) + 1;
	}
	else
	{
		tab_char = av + 1;
		ac--;
	}
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
	int	*tab_index;

	tab_index = malloc(sizeof(int) * ac);
	if (!tab_index)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab_index[i] = ft_found_index(tab_int, i, ac);
		i++;
	}
	return (tab_index);
}

int	ft_found_index(int *tab, int i, int ac)
{
	int	j;
	int	count;

	j = 0;
	count = 1;
	while (j < ac)
	{
		if (tab[j] < tab[i] && i != j)
			count++;
		j++;
	}
	return (count);
}

t_stack	*ft_from_tab_to_stack(int *tab)
{
	t_stack	*stack;
	t_stack	*tamp;
	int		count;
	int		i;

	i = -1;
	count = ft_sizetab_int(tab);
	stack = NULL;
	while (tab[++i])
	{
		tamp = ft_stacknew(tab[i], count);
		if (!tamp)
			return (NULL);
		ft_stackadd_back(&stack, tamp);
	}
	return (stack);
}

