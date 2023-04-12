/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:38:36 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:27 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (str);
}

/*int	main(void)
 * {
 * 	char	arr[8] = "ABCDefgh";
 * 	printf("String: %s\n", arr);
 * 	ft_memset(arr, '1', 4);
 * 	printf("Return: %s", arr);
 * 	return(0);
 * }*/
