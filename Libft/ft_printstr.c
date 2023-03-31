/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:49:30 by lgabet            #+#    #+#             */
/*   Updated: 2023/03/31 13:41:46 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(char *str)
{
	int	lenght;
	int	tamp;

	lenght = 0;
	if (str == NULL)
		return (ft_printstr("(null)"));
	while (str[lenght])
	{
		tamp = ft_printchar(str[lenght]);
		if (tamp == -1)
			return (tamp);
		lenght += tamp;
	}
	return (lenght);
}
