#include "ft_printf.h"

char *p_flags(t_flag *result, char *tmp)
{
    if (result->width > strln(tmp))
     {
         if (result->flag_left == 1)
             tmp = add_end(tmp, result->width - strln(tmp));
         else if (result->flag_zero == 1 && result->flag_left == 0)
             tmp = add_0_0x(tmp, result->width - strln(tmp));
         else
             tmp = add_start(tmp, result->width - strln(tmp));
     }
    return (tmp);
}
