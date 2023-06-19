/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunduz <gahmetanx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:53:04 by agunduz           #+#    #+#             */
/*   Updated: 2022/10/19 16:53:04 by agunduz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ad;
	t_list	*ap;

	ad = NULL;
	while (lst)
	{
		ap = ft_lstnew(f(lst -> content));
		if (!ap)
		{
			ft_lstclear(&ad, del);
			return (NULL);
		}
		ft_lstadd_back(&ad, ap);
		lst = lst -> next;
	}
	return (ad);
}
