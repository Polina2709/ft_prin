/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:29:18 by jczech            #+#    #+#             */
/*   Updated: 2019/09/19 16:02:03 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_str;

	i = 0;
	new_str = str;
	if (!str && !c && !n)
		return (NULL);
	while (i < n)
	{
		new_str[i] = c;
		i++;
	}
	return (str);
}
