/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_stack_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:16 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:47:18 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_stack_b(t_node *stack, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (ft_check_sorted(stack->b, len, 'b') == 1)
		while (len--)
			ft_push_a(stack);
	if (len <= 3)
	{
		ft_sort_b_3_and_less(stack, len);
		return (1);
	}
	numbers = len;
	if (!ft_mediane_of_numbers(&pivot, stack->b, len))
		return (0);
	while (len != numbers / 2)
	{
		if (stack->b[0] >= pivot && len--)
			ft_push_a(stack);
		else if (++count_r)
			ft_rotate_b(stack);
	}
	while (numbers / 2 != stack->size_b && count_r--)
		ft_reverse_rotate_b(stack);
	return (ft_quicksort_stack_a(stack, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_stack_b(stack, numbers / 2, 0));
}
