/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <gahmetanx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:56:43 by agunduz           #+#    #+#             */
/*   Updated: 2022/12/07 15:26:44 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	a = ft_strlen(dst);
	if (size <= d)
		return (size + s);
	i = 0;
	while (src[i] != '\0' && a < size - 1)
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (d + s);
}
