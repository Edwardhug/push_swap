/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_ac.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:31:36 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 15:16:49 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_ac(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	ft_sizetab_int(int *tab)
// {
// 	int	i;

// 	i = 0;
// 	while (tab[i])
// 		i++;
// 	return (i);
// }
