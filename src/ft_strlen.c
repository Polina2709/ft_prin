#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
	    return (0);
	while (str[i++] != '\0')
		count++;
	return (count);
}
