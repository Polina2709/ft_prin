#include "ft_printf.h"

void *insert_s(t_flag *result, char *var, char *s2, int wid)
{
    int i;
    int len;

    len = ft_strlen(var);
    i = 0;
    if (result->prec && result->precision < result->width)
        s2 = insert_s_to_precision(result,var, s2, wid);
    else if (result->flag_left == 1)
    {
        while (i != len)
        {
            s2[i] = var[i];
            i++;
        }
    }
    else
    {
        while (wid-- != 0)
            s2[result->width - wid - 1] = var[i++];
    }
    return (s2);
}