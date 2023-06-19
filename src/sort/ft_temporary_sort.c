/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temporary_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:48:04 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/13 14:48:06 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_temporary_sort(int *stack_tmp, int size)
{
	int	i;
	int	j;
	int	temporaire;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack_tmp[i] > stack_tmp[j])
			{
				temporaire = stack_tmp[i];
				stack_tmp[i] = stack_tmp[j];
				stack_tmp[j] = temporaire;
			}
			j++;
		}
		i++;
	}
}
