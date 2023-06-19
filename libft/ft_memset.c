/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <gahmetanx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:54:00 by agunduz           #+#    #+#             */
/*   Updated: 2022/12/07 17:49:32 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*string'i gönderdiğimiz karakter ile istediğimiz kadar dolduruyor*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*dest;

	dest = b;
	i = 0;
	while (i < len)
	{
		dest[i] = c;
		i++;
	}
	return (b);
}
