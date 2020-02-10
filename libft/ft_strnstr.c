/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:19:07 by jczech            #+#    #+#             */
/*   Updated: 2019/10/24 18:00:40 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i + j < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(&haystack[i]));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
