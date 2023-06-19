/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:54 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:47:55 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_node *stack, int len, int push)
{
	if (push == 0)
		ft_push_b(stack);
	else
		ft_push_a(stack);
	len--;
	return (len);
}
