/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:52:04 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:42:44 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*nnode;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	lst = lst->next;
	while (lst)
	{
		nnode = ft_lstnew(f(lst->content));
		if (!nnode)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&new, nnode);
	}
	return (new);
}
