/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:16:17 by jczech            #+#    #+#             */
/*   Updated: 2019/09/24 19:17:35 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!new_str)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = f((char)s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
