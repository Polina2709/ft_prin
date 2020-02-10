/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:55:18 by jczech            #+#    #+#             */
/*   Updated: 2019/09/21 22:57:17 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;
	size_t	n;

	if (!s1 || !s2)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	join_str = (char *)malloc(sizeof(char *) * n + 1);
	if (!join_str)
		return (NULL);
	ft_strcpy(join_str, s1);
	join_str = ft_strcat(join_str, (const char *)s2);
	return (join_str);
}
