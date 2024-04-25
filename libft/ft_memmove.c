/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:34:06 by hatalhao          #+#    #+#             */
/*   Updated: 2023/11/03 21:40:15 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*str1;
	char			*str2;

	if (dest == src || n == 0)
		return (dest);
	str1 = (char *) src;
	str2 = (char *) dest;
	if (str2 > str1)
	{
		while (n--)
			str2[n] = str1[n];
		return (dest);
	}
	ft_memcpy(str2, str1, n);
	return (dest);
}
