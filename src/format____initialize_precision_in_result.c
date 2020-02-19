#include "ft_printf.h"

void *initialize_precision_in_result(t_flag *result, char *format_line, va_list ap)
{
	int prec;

	if (*format_line == '.' && *(format_line + 1) == '*')
	{
		prec = va_arg(ap, int);
		if (prec < 0) {
			result->flag_left = 1;
			prec *= -1;
		}
		result->prec = 1;
		format_line++;
		result->precision = prec;
	}
	else if (*format_line == '.')
	{
		format_line++;
		result->precision = ft_atoi(format_line);
		result->prec = 1;
		while (ft_isdigit(*format_line))
			format_line++;
		format_line--;
	}
	return (format_line);
}