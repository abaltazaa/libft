/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:41:46 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:41 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen((char *)src);
	if (size <= sizedst)
		return (sizesrc + size);
	while (sizedst < (size - 1) && src[i] != '\0')
	{
		dst[sizedst] = src[i];
		i++;
		sizedst++;
	}
	dst[sizedst] = '\0';
	return (sizesrc + ft_strlen(dst) - i);
}
