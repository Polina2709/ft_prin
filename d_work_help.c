#include "ft_printf.h"

void *var_with_sign(va_list ap, t_flag *result, char *var)
{
    char *tmp;

    tmp = var;
//    tmp = ft_itoa(va_arg(ap, int));
    if (ft_atoi(tmp) >= 0 && result->flag_sign == 1 && ((result->flag_zero == 1 && result->width <= ft_strlen(tmp)) || result->flag_zero == 0) && !(result->flag_sign == 1 && result->precision > 0)) // && result->flag_zero == 0
    {
        var = "+";
        var = ft_strjoin(var, tmp);
    }
    else
        var = tmp;
    return (var);
}

void *insert_d_width_no_left(t_flag *result, char *s2, char *var, int wid)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(var);
    if (s2[0] == '-')
   {
        i++;
        wid--;
   }
    if (result->flag_space == 1 && ft_atoi(var) >= 0 && result->flag_sign == 0 && result->width + 1 > len && wid > 1)
    {
        wid -= 1;
        while (var[i])
        {
            s2[result->width - wid - 1] = var[i++];
            wid--;
        }
    }
    else {
        while (wid-- != 0)
            s2[result->width - wid - 1] = var[i++];
    }
    return (s2);
}

void *insert_d_width_left(t_flag *result, char *s2, char *var, int wid)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(var);
    if (result->flag_space == 1 && ft_atoi(var) >= 0 && result->flag_sign == 0 && result->width + 1 > len && wid > 1)
    {
        wid -= 1;
        while (wid != 0)
        {
            s2[result->width - wid] = var[i++];
            wid--;
        }
    }
    else
    {
        while (wid-- != 0)
            s2[result->width - wid - 1] = var[i++];
    }
    return (s2);
}

