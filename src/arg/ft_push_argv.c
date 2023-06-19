/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:45:19 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:45:22 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_argv(char **argv)
{
	t_node	stack;
	int		size;
	int		i;

	i = -1;
	size = ft_push_swap_strlen(argv);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(sizeof(int) * size);
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_ps_atoi(argv [i], stack.a);
	ft_check_doubles(stack.a, size);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}
