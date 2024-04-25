/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:05:16 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/05 19:33:24 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (needle && ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	i = 0;
	j = 0;
	if (n == 0)
		return ((char *)(haystack));
	if (needle[j] == '\0')
		return ((char *)(haystack));
	while (haystack[i] && i < n)
	{
		while ((haystack[i + j] == needle[j]
				&& needle[j] != '\0' && (i + j) < n))
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
		j = 0;
	}
	return (NULL);
}
