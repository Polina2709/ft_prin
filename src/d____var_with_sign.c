#include "ft_printf.h"

void *var_with_sign(va_list ap, t_flag *result, char *var)
{
	char *tmp;

	tmp = var;
	if (ft_atoi(tmp) >= 0 && result->flag_sign == 1 && ((result->flag_zero == 1
		&& result->width <= ft_strlen(tmp)) || result->flag_zero == 0)
		&& !(result->flag_sign == 1 && result->precision > 0))
	{
		var = "+";
		var = ft_strjoin(var, tmp);
	}
	else
		var = tmp;
	return (var);
}