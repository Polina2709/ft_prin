#include "ft_printf.h"

char *work_with_xx(char *to_c, va_list ap, t_flag *result, char *s2)
{
    char *var;

    initialize_result(result, to_c, ap);
    if (result->width_star == 1)
        va_arg(ap, int);
    if (result->size == 3 || result->size == 4)
        var = ft_itoa_unsigned_long((unsigned long)va_arg(ap, long));
    else if (result->size == 1)
        var = ft_itoa_unsigned((short unsigned int)va_arg(ap, long));
    else if (result->size == 2)
        var = ft_itoa_unsigned((unsigned char)va_arg(ap, long));
    else
        var = ft_itoa_unsigned((unsigned int)va_arg(ap, int));
    return (xx_flags(ap, result, s2, var));
}