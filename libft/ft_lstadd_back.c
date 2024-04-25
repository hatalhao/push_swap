/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 03:33:41 by hatalhao          #+#    #+#             */
/*   Updated: 2024/03/26 03:36:06 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *head;
    
    if (!lst || !*lst || !new)
        return ;
    head = *lst;
    while (head)
	{
		if (!(head->next))
			{
				head->next = new;
				new->next = NULL;
			}
		head = head->next;
	}
}
