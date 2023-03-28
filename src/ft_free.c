/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:18:38 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/28 14:55:25 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_list(t_stack *a)
{
	t_stack	*next;

	while (a)
	{
		a->num = 0;
		next = a->next;
		free(a);
		a = next;
	}
}

void	ft_free_tab_char(char **str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}