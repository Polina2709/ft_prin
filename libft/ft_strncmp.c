/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:28:55 by jczech            #+#    #+#             */
/*   Updated: 2019/09/19 16:43:08 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				out;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	out = 0;
	i = 0;
	if (!n && !str1 && !str2)
		return (0);
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		out = str1[i] - str2[i];
		i++;
		if (out != 0)
			return (out);
	}
	return (out);
}
