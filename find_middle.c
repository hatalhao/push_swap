/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:50:36 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/24 03:41:35 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	median(int *arr, int half)
{
	int	mid;
	int	i;

	mid = 0;
	i = 0;
	while (arr[i] && i < half)
		i++;
	mid =  arr[i / 2 - (arr[i] % 2)];
	return (mid);
}
