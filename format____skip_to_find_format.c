#include "ft_printf.h"

void *skip_to_find_type(char *format_line, va_list ap, t_flag *result, char *s2)
{
	char *type_in_line;

	type_in_line = format_line;
	zero_result(result);
	while (ft_strchr(FLAGS, *type_in_line))
		type_in_line++;
	if (*type_in_line == 'c')
		return(work_with_c(format_line, ap, result, s2));
	else if (*type_in_line == 's')
		return(work_with_s(format_line, ap, result, s2));
	else if (*type_in_line == 'd' || *type_in_line == 'i')
		return(work_with_d(format_line, ap, result, s2));
	else if (*type_in_line == 'p')
		return(work_with_p(format_line, ap, result, s2));
	else if (*type_in_line == 'o')
		return (work_with_o(format_line, ap, result, s2));
    else if (*type_in_line == 'u')
        return (work_with_u(format_line, ap, result, s2));
	else if (*type_in_line == 'x')
		return (work_with_x(format_line, ap, result, s2));
	else if (*type_in_line == 'X')
		return (work_with_XX(format_line, ap, result, s2));
    else if(*type_in_line == 'f')
        return (work_with_f(format_line, ap, result, s2));
	return (0);
}