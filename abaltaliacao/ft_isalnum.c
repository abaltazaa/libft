/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:47:48 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:40:53 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9') || ((a >= 'A' && a <= 'Z')
			|| (a >= 'a' && a <= 'z')))
		return (1);
	return (0);
}
