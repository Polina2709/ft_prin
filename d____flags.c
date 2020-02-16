#include "ft_printf.h"

void *d_flags(va_list ap, t_flag *result, char *s2, char *var)
{
	int wid;

	var = var_with_sign(ap, result, var);
	wid = (int)ft_strlen(var);
	if ((ft_strequ(var, "+0") || ft_strequ(var, "0")) && result->precision <= 0
		&& result->prec == 1)
		s2 = mem_and_insert_d_for_zero(result, var, wid, s2);
	else  if (result->precision > 0)
		s2 = d_flags_precision(ap, result, s2, var);
	else
	{
		if ((result->flag_space == 1 && ft_atoi(var) >= 0 && result->flag_sign == 0
			&& result->width <= wid))
			wid += 1;
		if (result->width < wid)
			result->width = wid;
		if (result->width > 1)
			s2 = fill_zero_or_space(result, s2);
		if (result->width > wid)
			s2 = insert_d_width(result, var, s2, wid);
		else
			s2 = insert_d(result, var, s2, wid);
		s2[result->width] = '\0';
	}
	return (s2);
}