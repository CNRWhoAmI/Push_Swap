/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:46:20 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:50:37 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_r(t_node *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	i = 0;
	tmp = stack->a[i];
	while (++i < stack->size_a)
		stack->a[i - 1] = stack->a[i];
	stack->a[i - 1] = tmp;
	i = 0;
	tmp = stack->b[i];
	while (++i < stack->size_b)
		stack->b[i - 1] = stack->b[i];
	stack->b[i - 1] = tmp;
	ft_printf("rr\n");
}
