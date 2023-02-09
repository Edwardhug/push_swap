/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_ac.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:31:36 by lgabet            #+#    #+#             */
/*   Updated: 2023/02/09 11:55:45 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_count_ac(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

// int ft_count_before_split(char **av)
// {
//     char    *str;
//     char    set[2];
//     int     count;

//     // printf("%s\n", "salut");
//     set[0] = ' ';
//     set[1] = 0;
//     str = ft_strtrim(av[1], set);
//     if (!str)
//         return (2);
//     count = ft_count(str, ' ');
//     free (str);
//     return (count);
// }

int ft_sizetab_int(int *tab)
{
    int i;
    
    i = 0;
    while (tab[i])
        i++;
    return (i);
}