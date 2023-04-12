/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:17:31 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:11 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	minus(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static	int	size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = size(n);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		--len;
		res[len] = minus(n % 10) + 48;
		n = n / 10;
	}
	return (res);
}

/*int	main(void)
{
	printf("Return: %s\n", ft_itoa(123456789));
	printf("Return: %s\n", ft_itoa(0001057));
	printf("Return: %s\n", ft_itoa(-123456789));
	printf("Return: %s\n", ft_itoa(-000167));
	return (0);
}*/
