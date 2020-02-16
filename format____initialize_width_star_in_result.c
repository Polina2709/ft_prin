#include "ft_printf.h"

int initialize_width_star_in_result(t_flag *result, char *format_line, va_list ap, int wid)
{
	wid = (int)va_arg(ap, int);
	if (wid < 0)
	{
		result->flag_left = 1;
		wid *= -1;
	}
	result->width = wid;
	result->width_star = 1;
	return (wid);
}