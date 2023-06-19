/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:59 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:48:01 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_node *stack, int size_a)
{
	if (ft_check_sorted(stack->a, stack->size_a, 'a') == 0)
	{
		if (size_a == 2)
			ft_swap_a(stack);
		else if (size_a == 3)
			ft_three_number_case_root_a(stack);
		else
			ft_quicksort_stack_a(stack, size_a, 0);
	}
	return (0);
}
