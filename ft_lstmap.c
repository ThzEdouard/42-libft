/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:37:37 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/07 13:52:30 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list * list;
	t_list * new;
	if(!f || !del)
		return (NULL);
	list = NULL;
	while(lst)
	{
		if(!(new = ft_lstnew((*f)(lst->content))))
		{
			ft_lstdelone(new, del);
			return (list);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
