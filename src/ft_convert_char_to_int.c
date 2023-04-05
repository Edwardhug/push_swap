/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char_to_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:02:14 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/05 11:51:30 by lgabet           ###   ########.fr       */
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
		{
			ft_free_tab_char(tab_char);
			free(tab_int);
			return (NULL);
		}
		i++;
	}
	ft_free_tab_char(tab_char);
	return (tab_int);
}

char	*ft_join_every_arg(int ac, char **av)
{
	char	*tab;
	int		i;

	tab = NULL;
	i = 1;
	while (i < ac)
	{
		tab = ft_strjoin_free(tab, av[i]);
		if (!tab)
		{
			free(tab);
			return (NULL);
		}
		tab = ft_strjoin_free(tab, " ");
		if (!tab)
		{
			free(tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	int		size1;
	int		size2;
	char	*str;
	int		i;
	int		j;

	size1 = ft_strlen_error(s1);
	size2 = ft_strlen_error(s2);
	str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!str)
	{
		free(s1);
		return (NULL);
	}
	i = -1;
	j = 0;
	while (++i < size1)
		str[i] = s1[i];
	while (j < size2)
		str[i++] = s2[j++];
	str[size1 + size2] = 0;
	free(s1);
	return (str);
}

int	ft_strlen_error(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_too_long(int ac, char **tab_char)
{
	int	i;
	int	tamp;

	i = 1;
	while (i < ac)
	{
		tamp = ft_atoi_error(tab_char[i]);
		if (tamp == 0 && ft_strlen(tab_char[i]) != 1)
			return (1);
		i++;
	}
	return (0);
}
