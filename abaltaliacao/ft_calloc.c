/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:54:09 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:40:53 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned int	array;
	char			*ptr;

	array = num * size;
	ptr = malloc (array);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, array);
	return (ptr);
}
