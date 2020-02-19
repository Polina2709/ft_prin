#include "ft_printf.h"

char *work_with_p(char *to_s, va_list ap, t_flag *result, char *s2)
{
    initialize_result(result, to_s, ap);
    s2 = p_record(ap, s2);
    return (p_flags(result, s2));
}