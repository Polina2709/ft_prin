#include "ft_printf.h"

char *work_with_c(char *to_c, va_list ap, t_flag *result, char *s2)
{
    initialize_result(result, to_c, ap);
    return (c_flags(ap,result, s2));
}
