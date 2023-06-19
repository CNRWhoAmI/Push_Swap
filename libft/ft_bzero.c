/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <agunduz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:51:31 by agunduz           #+#    #+#             */
/*   Updated: 2023/06/08 17:22:18 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*array'i istediğimiz kadar null'la dolduruyor*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
