/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <agunduz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:52:27 by agunduz           #+#    #+#             */
/*   Updated: 2023/06/08 17:22:28 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*yazdırılabilir bir karakterse 1 döndür*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
