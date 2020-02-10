/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:11:14 by jczech            #+#    #+#             */
/*   Updated: 2019/09/24 19:31:41 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;

	i = (int)ft_strlen((char *)str);
	while (str[i] != ch && i != -1)
		i--;
	if (str[i] == ch)
		return ((char *)&str[i]);
	return (NULL);
}
