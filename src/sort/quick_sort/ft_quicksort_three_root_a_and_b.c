/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_three_root_a_and_b.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:31 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:47:33 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quicksort_3_and_less(t_node *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		ft_three_number_case_root_a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			ft_swap_a(stack);
	}
	else if (len <= 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				ft_swap_a(stack);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = ft_push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				ft_swap_a(stack);
			else if (len++)
				ft_push_a(stack);
		}
	}
}
