/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jczech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:43:20 by jczech            #+#    #+#             */
/*   Updated: 2019/09/12 16:43:20 by jczech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				j;
	int				out;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	out = 0;
	while (str1[i] != '\0' || str2[j] != '\0')
	{
		out = str1[i] - str2[j];
		i++;
		j++;
		if (out != 0)
			return (out);
	}
	return (out);
}
