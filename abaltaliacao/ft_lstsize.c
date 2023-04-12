/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:21:18 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:42:45 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
int main(void)
{
    int size;
    t_list *head;

    head = malloc(sizeof(t_list));
    head->data = 5;
    head->next = NULL;

    size = ft_lstsize(head);
    printf("List size is %d\n", size);
    return (0);
}
*/
