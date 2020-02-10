/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:27:46 by jczech            #+#    #+#             */
/*   Updated: 2019/09/19 15:57:28 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*s1;
	unsigned char	*d1;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	s1 = s + len - 1;
	d1 = d + len - 1;
	if (!s && !d)
		return (0);
	if (d >= s)
	{
		while (len--)
			*d1-- = *s1--;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
