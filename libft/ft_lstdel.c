/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:44:01 by jczech            #+#    #+#             */
/*   Updated: 2019/10/24 14:12:18 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (del && *alst && alst)
	{
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(&(*alst), del);
	}
}
