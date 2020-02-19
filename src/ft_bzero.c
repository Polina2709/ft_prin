#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = s;
	if (!s && !n)
		return ;
	while (i < n)
	{
		new_str[i] = '\0';
		i++;
	}
}
