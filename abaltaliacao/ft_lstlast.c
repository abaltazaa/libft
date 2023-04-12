/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:36:28 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:20 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (lst)
	{
		while (temp->next)
			temp = temp->next;
		return (temp);
	}
	return (0);
}
/*
int main(void)
{
    t_list *head;
    t_list *one;
    t_list *two;
    t_list *three;
    t_list *four;
    head = (t_list*)malloc(sizeof(t_list));
    one = (t_list*)malloc(sizeof(t_list));
    two = (t_list*)malloc(sizeof(t_list));
    three = (t_list*)malloc(sizeof(t_list));
    four = (t_list*)malloc(sizeof(t_list));
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    head->data = (void*)1;
    one->data = (void*)2;
    two->data = (void*)3;
    three->data = (void*)4;
    four->data = (void*)5;
    t_list *last = ft_lstlast(head);
    printf("The last node of the list is %d\n", (int)last->data);
    return (0);
}*/
