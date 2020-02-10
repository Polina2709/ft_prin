/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:34:44 by jczech            #+#    #+#             */
/*   Updated: 2019/09/20 14:50:42 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)(&haystack[j]));
	while (haystack[i] != '\0')
	{
		if (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(&haystack[i]));
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
