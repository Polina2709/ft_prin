#include "ft_printf.h"

char *work_with_f(char *to_c, va_list ap, t_flag *result, char *s2)
{
    initialize_result(result, to_c, ap);
    if (result->size == 0 || result->size == 3)
        s2 = ft_dtoa(va_arg(ap, double));
    else if (result->size == 5)
        s2 = ft_ldtoa(va_arg(ap, long double));
    s2 = f_flags(result, s2);
    return (s2);
}