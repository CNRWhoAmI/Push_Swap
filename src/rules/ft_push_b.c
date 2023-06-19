/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:45:33 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:45:35 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_node *stack)
{
	int	shift_number;

	if (stack->size_a)
	{
		shift_number = stack->size_b;
		stack->size_b++;
		while (shift_number > 0)
		{
			stack->b[shift_number] = stack->b[shift_number - 1];
			shift_number--;
		}
		stack->b[0] = stack->a[0];
		shift_number = 0;
		stack->size_a--;
		while (shift_number < stack->size_a)
		{
			stack->a[shift_number] = stack->a[shift_number + 1];
			shift_number++;
		}
		ft_printf("pb\n");
	}
	else
		return ;
}
