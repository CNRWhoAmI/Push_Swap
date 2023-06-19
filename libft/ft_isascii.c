/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <agunduz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:52:11 by agunduz           #+#    #+#             */
/*   Updated: 2023/06/08 17:22:23 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*ascii sınırları içersinde mi değilm mi*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
