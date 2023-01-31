/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:39:38 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/31 15:23:52 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_charstr(char c, char const	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_lenend(char const *s1, char const *set)
{
	int	i;
	int	count;

	count = 0;
	i = ft_strlen(s1) - 1;
	while (ft_charstr(s1[i], set) != 0 && i >= 0)
	{
		count++;
		i--;
	}
	return (count);
}

size_t	ft_lenbegin(char const *s1, char const *set)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (ft_charstr(s1[i], set) != 0 && s1[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			size;
	char		*str;
	int			i;

	i = 0;
	size = ft_strlen(s1) - ft_lenend(s1, set) - (ft_lenbegin(s1, set));
	if (ft_lenbegin(s1, set) == ft_strlen(s1))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = s1[i + (ft_lenbegin(s1, set))];
		i++;
	}
	str[i] = '\0';
	return (str);
}
