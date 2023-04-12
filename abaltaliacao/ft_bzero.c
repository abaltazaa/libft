/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:47:27 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:40:51 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*p;

	p = str;
	n++;
	while (--n)
	{
		*p++ = 0;
	}
}

/*int	main(void)
{
	char	arr[8] = "ABCDefgh";
	printf("String: %s\n", arr);
	ft_bzero(arr, 2);
	printf("Return: %s", arr);
	return (0);
}*/
