/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:35:59 by jczech            #+#    #+#             */
/*   Updated: 2019/09/24 19:33:41 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i < len)
			ft_putchar_fd(s[i++], fd);
		ft_putchar_fd('\n', fd);
	}
}
