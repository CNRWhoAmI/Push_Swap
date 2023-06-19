/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <gahmetanx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:57:41 by agunduz           #+#    #+#             */
/*   Updated: 2022/12/07 14:51:47 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*needle'ı bulduğu andaki adresi döndürüyor*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (haystack == NULL)
		return (NULL);
	if (n_len == 0 || haystack == needle)
		return ((char *)haystack);
	while (((char *)(haystack))[i] != '\0' && i < len)
	{
		c = 0;
		while (((char *)(haystack))[i + c] != '\0' && needle[c] != '\0'
			&& ((char *)(haystack))[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
