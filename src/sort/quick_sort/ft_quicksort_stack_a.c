/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_stack_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:09 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/19 13:40:36 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_stack_a(t_node *stack, int len, int rotate_counter)
{
	int	pivot;
	int	numbers;

	if (ft_check_sorted(stack->a, len, 'a') == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		ft_quicksort_3_and_less(stack, len);
		return (1);
	}
	if (!ft_mediane_of_numbers(&pivot, stack->a, len))
		return (0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (--len))
			ft_push_b(stack);
		else if (++rotate_counter)
			ft_rotate_a(stack);
	}
	while ((numbers / 2 + numbers % 2 != stack->size_a) && rotate_counter--)
		ft_reverse_rotate_a(stack);
	return (ft_quicksort_stack_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_stack_b(stack, numbers / 2, 0));
	return (1);
}
