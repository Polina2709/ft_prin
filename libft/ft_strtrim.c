/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:51:08 by jczech            #+#    #+#             */
/*   Updated: 2019/09/21 22:33:33 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_end(char const *s, size_t len)
{
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*copy;
	size_t	len;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = ft_from_begin(s, i);
	if (i == len)
	{
		if (!(copy = (char *)malloc(sizeof(char *) * 1)))
			return (NULL);
	}
	else
	{
		if (!(copy = (char *)malloc(sizeof(char) * (f_end(s, len) - i + 1))))
			return (NULL);
		while (i < f_end(s, len))
			copy[j++] = s[i++];
	}
	copy[j] = '\0';
	return (copy);
}
