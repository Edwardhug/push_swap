/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char_to_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:02:14 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 22:58:06 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_convert_char_to_int(int i, char **tab_char, int *tab_int)
{
	i = 0;
	while (tab_char[i])
	{
		tab_int[i] = ft_atoi_error(tab_char[i]);
		if (tab_int[i] == 0 && ft_strlen(tab_char[i]) != 1)
			return (NULL);
		i++;
	}
	return (tab_int);
}

char	*ft_join_every_arg(int ac, char **av)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char));
	tab[0] = '\0';
	i = 1;
	while (i < ac)
	{
		tab = ft_strjoin(tab, av[i]);
		if (!tab)
		{
			free(tab);
			return (NULL);
		}
		tab = ft_strjoin(tab, " ");
		if (!tab)
		{
			free(tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

// int	ft_strlen_error(char *str)
// {
// 	int	i;

// 	if (!str)
// 		return (0);
// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }