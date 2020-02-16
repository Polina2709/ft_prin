#include "ft_printf.h"

void *mem_for_d_by_width(t_flag *result, char *s2, char *var_p, int wid_p)
{

	free(s2);
	s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
	if (result->flag_left == 1)
	{
		s2 = ft_memset(s2, ' ', result->width);
		s2 = ft_memset(s2, '0', result->precision);
	}
	else
	{
		s2 = ft_memset(s2, '0', result->width);
		s2 = ft_memset(s2, ' ', result-> width - result->precision);
	}
	s2 = insert_d_by_width(result, s2, var_p, wid_p);
	return (s2);
}