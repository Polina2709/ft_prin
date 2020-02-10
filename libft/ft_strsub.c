/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:45:25 by jczech            #+#    #+#             */
/*   Updated: 2019/09/24 17:50:13 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	i = 0;
	if (s == NULL || len + 1 < len)
		return (NULL);
	if (!(sub_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = len + start;
	while (start != len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	if (start == len)
		return (sub_str);
	return (NULL);
}
