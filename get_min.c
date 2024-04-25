/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:56 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/18 01:51:57 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list	*list)
{
	int	min;
	int	index;

	min = list->nbr;
	index = list->index;
	while (list)
	{
		if (list->nbr < min)
		{	
			min = list->nbr;
			index = list->index;
		}
		list = list->next;
	}
	return (index);
}
