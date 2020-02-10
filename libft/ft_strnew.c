/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:30:16 by jczech            #+#    #+#             */
/*   Updated: 2019/09/24 19:26:58 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;

	if (size + 1 < size)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (new_str == NULL)
		return (NULL);
	ft_memset(new_str, '\0', size + 1);
	return (new_str);
}
