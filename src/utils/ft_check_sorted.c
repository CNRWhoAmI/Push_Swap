/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:48:23 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:48:24 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted(int *stack_address, int stack_size, char stack_name)
{
	int	i;

	if (stack_name == 'a')
	{
		i = 1;
		while (i < stack_size)
		{
			if (stack_address[i - 1] > stack_address[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < stack_size)
		{
			if (stack_address[i - 1] < stack_address[i])
				return (0);
			i++;
		}
		return (1);
	}
}
