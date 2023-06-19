/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:45:27 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:49:52 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_node *stack)
{
	int	shift_number;

	if (stack->size_b)
	{
		shift_number = stack->size_a;
		stack->size_a++;
		while (shift_number > 0)
		{
			stack->a[shift_number] = stack->a[shift_number - 1];
			shift_number--;
		}
		stack->a[0] = stack->b[0];
		shift_number = -1;
		stack->size_b--;
		while (++shift_number < stack->size_b)
			stack->b[shift_number] = stack->b[shift_number + 1];
		ft_printf("pa\n");
	}
	return ;
}
