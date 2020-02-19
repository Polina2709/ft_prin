#include "ft_printf.h"

char *work_with_s(char *to_s, va_list ap, t_flag *result, char *s2)
{
    initialize_result(result, to_s, ap);
    return (s_flags(ap,result, s2));
}