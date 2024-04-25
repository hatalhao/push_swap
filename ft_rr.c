/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:31:09 by hatalhao          #+#    #+#             */
/*   Updated: 2024/04/25 22:47:43 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_list **stacka, t_list **stackb)
{
	if (!*stacka || !stacka || !*stackb || !stackb)
		return ;
	ft_rotate(stacka, NULL);
	ft_rotate(stackb, NULL);
	ft_printf("rr\n");
}
