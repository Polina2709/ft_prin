/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:53:35 by jczech            #+#    #+#             */
/*   Updated: 2019/10/24 17:17:51 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_delmap(t_list *lst)
{
	t_list	*del_lst;

	while (lst)
	{
		del_lst = lst;
		lst = lst->next;
		if (del_lst->content)
			free(del_lst->content);
		free(del_lst);
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*begin_list;
	t_list	*tmp;

	begin_list = NULL;
	if (!lst || !(*f))
		return (NULL);
	if (f(lst))
	{
		if (!(new_lst = (t_list *)malloc(sizeof(lst))))
			return (NULL);
		new_lst = f(lst);
		begin_list = new_lst;
		lst = lst->next;
		while (lst)
		{
			tmp = f(lst);
			if (!(new_lst->next = ft_lstnew(tmp->content, tmp->content_size)))
				return (ft_delmap(begin_list));
			lst = lst->next;
			new_lst = new_lst->next;
			free(tmp);
		}
	}
	return (begin_list);
}
