#include "ft_printf.h"

char *work_with_c(char *to_c, va_list ap, t_flag *result, char *s2)
{
    initialize_result(result, to_c, ap);
    return (c_flags(ap,result, s2));
}

void *c_flags(va_list ap, t_flag *result, char *s2)
{
    unsigned char var;
    int wid;

    var = (unsigned char)va_arg(ap, int);
    if (result->width > 1)
    {
        free(s2);
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_zero == 1 && result->flag_left == 0)
            s2 = ft_memset(s2, '0', result->width);
        else
            s2 = ft_memset(s2, ' ', result->width);
    }
    if (result->flag_left == 1)
        s2[0] = var;                                                                            //мб (char)var
    else // if (result->flag_left == 0)
        s2[result->width - 1] = var;
    s2[result->width] = '\0';
    return (s2);
}