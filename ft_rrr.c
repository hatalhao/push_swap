/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:51:36 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/26 11:37:08 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_list **stacka, t_list **stackb)
{
	ft_reverse_rotate(stacka, NULL);
	ft_reverse_rotate(stackb, NULL);
	ft_printf("rrr\n");
}
