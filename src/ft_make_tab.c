/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:46:09 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/02 20:10:18 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_fill_tab(int ac, char **av)
{
	int		*tab_index;

	tab_index = ft_convert_to_index(ac, char **av);
}

int	*ft_convert_to_index(int ac, char **av)
{
	char	**tab_char;
	int		*tab_index;
	int		*tab_int;
	int		i;

	tab_int = malloc(sizeof(int) * ac);
	if (!tab_int)
		return (NULL);
	if (ac > 2)
		tab_char = ft_split(av[1], ' ');
	else
		tab_char = av + 1;
	i = -1;
	while (tab_char[++i])
		tab_int[i] = ft_atoi(tab_char[i]);
	tab_index = ft_fill_index(ac, tab_int);
	if (!tab_index)
		return (NULL);
	return (tab_index);
}

int	*ft_fill_index(int ac, int *tab_int)
{
	int	i;

	tab_int = malloc(sizeof(int) * ac)
	if (!tab_int)
	{
		free(tab_int);
		return (NULL);
	}
	i = 0;
	while (i < ac)
		tab_index[i++] = ft_found_index(tab_int);
	free(tab_int);
	return (tab_index);
}