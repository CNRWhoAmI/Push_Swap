/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mediane_of_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:46:57 by ctoptas           #+#    #+#             */
/*   Updated: 2023/06/14 16:07:22 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mediane_of_numbers(int *pivot, int *stack, int size)
{
	int		*temporaire_root;
	int		i;

	temporaire_root = (int *)malloc(size * sizeof(int));
	if (!temporaire_root)
		return (0);
	i = 0;
	while (i < size)
	{
		temporaire_root[i] = stack[i];
		i++;
	}
	ft_temporary_sort(temporaire_root, size);
	*pivot = temporaire_root[size / 2];
	free(temporaire_root);
	return (1);
}
