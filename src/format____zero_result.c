#include "ft_printf.h"

void zero_result(t_flag *result)
{
	result->flag_left = 0;
	result->flag_sign = 0;
	result->flag_zero = 0;
	result->flag_space = 0;
	result->flag_hash = 0;
	result->width_star = 0;
	result->width = 0;
	result->prec = 0;
	result->precision = 0;
	result->size = 0;
}