#include "ft_printf.h"

void *u_flags(va_list ap, t_flag *result, char *s2, char *var)
{
    int wid;

    wid = ft_strlen(var);
    if (result->width >= result->precision && result->width >= wid)
        s2 = mem_u_by_width(result, var, s2, wid);
    else if (wid > result->width && wid >= result->precision)
        s2 = mem_and_insert_u_by_wid(result, var, s2, wid);
    else
        s2 = mem_and_insert_u_by_precision(result, var, s2, wid);
    return (s2);
}