/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:44:09 by jczech            #+#    #+#             */
/*   Updated: 2019/09/19 15:03:45 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	length;
	char	*n_string;
	int		i;

	i = 0;
	length = ft_strlen(src);
	n_string = (char*)malloc(sizeof(char) * length + 1);
	if (!n_string)
		return (NULL);
	while (src[i] != '\0')
	{
		n_string[i] = src[i];
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}
