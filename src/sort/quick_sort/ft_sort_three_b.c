/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:36 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:47:38 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_b_3_and_less(t_node *stack, int len)
{
	if (len == 1)
		ft_push_a(stack);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			ft_swap_b(stack);
		while (len--)
			ft_push_a(stack);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
			{
				ft_swap_a(stack);
			}
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_push(stack, len, 1);
			else
				ft_swap_b(stack);
		}
	}
	return (0);
}
