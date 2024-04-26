/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 03:36:37 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:04:19 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*list;

	list = (t_list *) malloc (sizeof(t_list));
	if (!list)
		return (NULL);
	list->nbr = content;
	list->next = NULL;
	return (list);
}
