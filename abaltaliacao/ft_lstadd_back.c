/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:20:09 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:12 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

/*int	main()
{
	char *result;
	t_list *head;
	t_list *new;
	t_list *new2;
	t_list *new3;
	t_list *last;
	if(!(result = malloc(sizeof(t_list))))
		return 0;
	if(!(head = malloc(sizeof(t_list))))
		return 0;
	if(!(new = malloc(sizeof(t_list))))
		return 0;
	if(!(new2 = malloc(sizeof(t_list))))
		return 0;
	if(!(new3 = malloc(sizeof(t_list))))
		return 0;
	if(!(last = malloc(sizeof(t_list))))
		return 0;
	head->content = (char *)"head";
	head->next = NULL;
	new->content = (char *)"new";
	new->next = NULL;
	new2->content = (char *)"new2";
	new2->next = NULL;
	new3->content = (char *)"new3";
	new3->next = NULL;
	last->content = (char *)"last";
	last->next = NULL;
	ft_lstadd_front(&head, new);
	ft_lstadd_front(&new, new2);
	ft_lstadd_front(&new2, new3);
	ft_lstadd_back(&new3, last);
	result = (char *)ft_lstlast(new3)->content;
	printf("%s\n", result);
	return 0;
}*/
