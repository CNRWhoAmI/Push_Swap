/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <gahmetanx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:57:46 by agunduz           #+#    #+#             */
/*   Updated: 2022/12/07 14:00:53 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*dizinin içersindeki karakterin konumunu döndürür ancak tersten kontrol eder*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
