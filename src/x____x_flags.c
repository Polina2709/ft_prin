#include "ft_printf.h"

void *x_flags(va_list ap, t_flag *result, char *s2, char *var)
{
    int wid;
    char *new_var;
    unsigned long int nbr;

    nbr = ft_atoi_unsigned(var);
    new_var = ft_itoa_base(nbr, 16);
    if (result->flag_hash == 1)
        new_var = ft_strjoin("0x", new_var);
    wid = ft_strlen(new_var);
    if (result->width >= result->precision && result->width >= wid)
        s2 = mem_x_by_width(result, new_var, s2, wid);
    else if (wid > result->width && wid > result->precision)
        s2 = mem_and_insert_x_by_wid(result, new_var, s2, wid);
    else
        s2 = mem_and_insert_x_by_precision(result, new_var, s2, wid);
    return (s2);
}