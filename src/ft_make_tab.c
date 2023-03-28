/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:46:09 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 22:58:48 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_fill_tab(int ac, char **av)
{
	int		*tab_index;
	// int		*tab_int;
	t_stack	*stack;

	// tab_int = malloc(sizeof(int) * ac);
	// if (!tab_int)
	// 	return (NULL);
	tab_index = ft_convert_to_index(ac, av);
	if (!tab_index)
		return (NULL);
	// int i = 0;
	// while ((tab_index[i]))
	// {
	// 	ft_printf("%d ", tab_index[i]);
	// 	i++;
	// }
	// ft_printf("\n");


		
	stack = ft_from_tab_to_stack(tab_index);
	if (!stack)
		return (NULL);
	free(tab_index);
	return (stack);
}

int	*ft_convert_to_index(int ac, char **av)
{
	char	**tab_char;
	int		*tab_index;
	int		i;
	char	*av_join;
	int		*tab_int;

	av_join = ft_join_every_arg(ac, av);
	if (!av_join)
		return (NULL);
	tab_char = ft_split(av_join, ' ');
	
	ac = ft_count_ac(tab_char);
	i = -1;
	tab_int = malloc(sizeof(int) * (ft_count_ac(tab_char)));
	if (!tab_int)
		return (NULL);
	tab_int = ft_convert_char_to_int(i, tab_char, tab_int);
	if (!tab_int)
		return (NULL);
	if (have_same_numbers(ac, tab_int))
		return (NULL);
	tab_index = ft_fill_index(ac, tab_int);
	if (!tab_index)
		return (NULL);
	

	
	free(av_join);
	free(tab_int);
	ft_free_tab_char(tab_char);
	return (tab_index);
}

int	*ft_fill_index(int ac, int *tab_int)
{
	int	i;
	int	*tab_index;

	tab_index = malloc(sizeof(int) * (ac + 1));
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
	int		i;

	i = -1;
	// count = ft_sizetab_int(tab);
	stack = NULL;
	while (tab[++i])
	{
		tamp = ft_stacknew(tab[i]);
		if (!tamp)
			return (NULL);
		ft_stackadd_back(&stack, tamp);
	}
	return (stack);
}
