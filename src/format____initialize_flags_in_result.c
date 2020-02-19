#include "ft_printf.h"

void initialize_flags_in_result(t_flag *result, char *format_line)
{
	if (*format_line == '-')
		result->flag_left = 1;
	else if (*format_line == '+')
		result->flag_sign = 1;
	else if (*format_line == ' ')
		result->flag_space = 1;
	else if (*format_line == '#')
		result->flag_hash = 1;
}