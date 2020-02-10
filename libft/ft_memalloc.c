/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:05:14 by jczech            #+#    #+#             */
/*   Updated: 2019/09/17 11:25:38 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_mem;

	new_mem = malloc(size);
	if (new_mem == NULL)
		return (NULL);
	ft_bzero(new_mem, size);
	return (new_mem);
}
