/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <agunduz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:51:47 by agunduz           #+#    #+#             */
/*   Updated: 2023/06/08 17:22:14 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*0-9 aralığındaysa veya büyük küçük harfse 1 döndür*/
int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
