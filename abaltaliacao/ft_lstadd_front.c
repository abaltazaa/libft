/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:10:20 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:14 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main(void)
{
	t_list *head = NULL;
	t_list *new;

	new = malloc(sizeof(t_list));
	new->data = 1;
	ft_lstadd_front(&head, new);

	new = malloc(sizeof(t_list));
	new->data = 2;
	ft_lstadd_front(&head, new);

	new = malloc(sizeof(t_list));
	new->data = 3;
	ft_lstadd_front(&head, new);

	while (head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
	return (0);
}
*/
