#include "ft_printf.h"

void initialize_result(t_flag *result, char *format_line, va_list ap)
{
	int wid;

	result->width = 1;
	while (ft_strchr(FLAGS, *format_line))
	{
		initialize_flags_in_result(result, format_line);
		if (*format_line == '0')
			result->flag_zero = 1;
		else if (*format_line == '*' && *format_line - 1 != '.')
			wid = initialize_width_star_in_result(result, format_line, ap, wid);
		else if (ft_isdigit(*format_line))
		{
			result->width = ft_atoi(format_line);
			while (ft_isdigit(*format_line))
				format_line++;
			continue;
		}
		format_line = initialize_precision_in_result(result, format_line, ap);
		format_line = initialize_type_flags_in_result(result, format_line);
		format_line++;
	}
}