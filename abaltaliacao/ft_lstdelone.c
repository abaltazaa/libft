/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:51:25 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:17 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
int main(void)
{
    t_list *node;
    node = (t_list*)malloc(sizeof(t_list));
    node->content = "Hello World!";
    node->next = NULL;

    ft_lstdelone(node, free);

    return 0;
}*/
