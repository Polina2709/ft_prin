/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:05:20 by jczech            #+#    #+#             */
/*   Updated: 2019/09/12 20:46:29 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*find;

	find = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (find[i] == (unsigned char)c)
			return (&find[i]);
		else
			i++;
	}
	return (NULL);
}
