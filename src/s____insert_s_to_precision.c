#include "ft_printf.h"

void *insert_s_to_precision(t_flag *result, char *var, char *s2, int wid)
{
    int i;
    int precis;

    i = 0;
    precis = result->precision;
    if (result->precision == 0 && result->width < 2)
    {
        free(s2);
        s2 = ft_memalloc(1);
    }
    else if (result->precision <= result->width)
    {
        if (result->flag_left == 1)
        {
            while (i != precis) {
                s2[i] = var[i];
                i++;
            }
        }
        else
        {
            while (precis-- != 0)
                s2[result->width - precis - 1] = var[i++];
        }
    }
    return (s2);
}