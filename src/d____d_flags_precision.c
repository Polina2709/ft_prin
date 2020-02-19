#include "ft_printf.h"

void *d_flags_precision(va_list ap, t_flag *result, char *s2, char *var)
{
	int wid_p;

	wid_p = ft_strlen(var);
	if (result->precision < wid_p && result->width <= 1)
		s2 = mem_and_insert_d_by_wid(result, s2, var, wid_p);
	else if (result->precision < result->width)
		s2 = mem_for_d_by_width(result, s2, var, wid_p);
	else if (result->precision >= result->width)
		s2 = mem_and_insert_d_by_precision(result, s2, var, wid_p);
	return (s2);
}