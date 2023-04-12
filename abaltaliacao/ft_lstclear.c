/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:16:45 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:15 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next = node->next;
		del(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}
/*
int		main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstclear(&lst, &del);
	if (!lst)
		ft_putstr("OK\n");
	return (0);
}
*/
