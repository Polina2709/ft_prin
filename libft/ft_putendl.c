/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:13:39 by jczech            #+#    #+#             */
/*   Updated: 2019/09/20 19:32:15 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i < len)
			ft_putchar(s[i++]);
		ft_putchar('\n');
	}
}
