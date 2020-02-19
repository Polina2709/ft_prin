#include "ft_printf.h"

void *fill_zero_or_space(t_flag *result, char *s2)
{
	free(s2);
	s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
	if (result->flag_zero == 1 && result->flag_left == 0)
		s2 = ft_memset(s2, '0', result->width);
	else
		s2 = ft_memset(s2, ' ', result->width);
	return (s2);
}