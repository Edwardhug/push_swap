/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char_to_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:02:14 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/13 14:08:03 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_convert_char_to_int(int i, char **tab_char, int **tab_int)
{
	while (tab_char[++i])
	{
		*tab_int[i] = ft_atoi_error(tab_char[i]);
		if (*tab_int[i] == 0 && ft_strlen(tab_char[i]) != 1)
			return (1);
	}
	return (0);
}