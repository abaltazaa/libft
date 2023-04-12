/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:09:09 by abaltaza          #+#    #+#             */
/*   Updated: 2023/01/09 20:41:59 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
int main(void)
{
	char *s = "Hello World!";
	char *substr = ft_substr(s, 6, 5);

	printf("Original string: %s\n", s);
	printf("Substring: %s\n", substr);
	free(substr);
	return (0);
}*/
