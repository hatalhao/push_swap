/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:52:03 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/18 01:52:04 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *list)
{
	if (!list)
		return ;
	while (list)
	{
		if (!list)
			break ;
		ft_printf("| %d	|\n", list->nbr);
		list = list->next;
	}
}
