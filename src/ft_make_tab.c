/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:46:09 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/01 16:53:45 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_fill_tab(int ac, char **av)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * (ac - 1));
	if (!tab)
		return (NULL);
}