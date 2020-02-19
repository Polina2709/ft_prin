#include "ft_printf.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_str;

	i = 0;
	new_str = str;
	if (!str && !c && !n)
		return (NULL);
	while (i < n)
	{
		new_str[i] = c;
		i++;
	}
	return (str);
}
