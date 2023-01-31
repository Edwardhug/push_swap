/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:05:02 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/31 15:23:52 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tamp;
	void	*v;

	if (!f || !del)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		v = f(lst->content);
		tamp = ft_lstnew(v);
		if (!tamp)
		{
			ft_lstclear(&ret, del);
			del(v);
			return (NULL);
		}
		ft_lstadd_back(&ret, tamp);
		lst = lst->next;
	}
	return (ret);
}
