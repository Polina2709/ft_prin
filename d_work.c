#include "ft_printf.h"

char *work_with_d(char *to_c, va_list ap, t_flag *result, char *s2)
{
    char *var;

    initialize_result(result, to_c, ap);
    if (result->size == 3 || result->size == 4)                                                                                                          // long long отдельно ????
        var = ft_itoa_long(va_arg(ap, long));
    else if (result->size == 1)
        var = ft_itoa_long((short int)va_arg(ap, long));
    else if (result->size == 2)
        var = ft_itoa_long((char)va_arg(ap, long));
    else
        var = ft_itoa((int)va_arg(ap, long));
    return (d_flags(ap,result, s2, var));

}

void *d_flags(va_list ap, t_flag *result, char *s2, char *var)
{
 //   char *var;
    int wid;

    var = var_with_sign(ap, result, var);
    wid = (int)ft_strlen(var);
    if ((ft_strequ(var, "+0") || ft_strequ(var, "0")) && result->precision <= 0 && result->prec == 1)
          s2 = mem_and_insert_d_for_zero(result, var, wid, s2);
    else  if (result->precision > 0)
        s2 = d_flags_precision(ap, result, s2, var);
    else
        {
        if ((result->flag_space == 1 && ft_atoi(var) >= 0 && result->flag_sign == 0 && result->width <= wid))
            wid += 1;
        if (result->width < wid)
            result->width = wid;
        if (result->width > 1)
            s2 = fill_zero_or_space(result, s2);
     if (result->width > wid)
            s2 = insert_d_width(result, var, s2, wid);
     else
            s2 = insert_d(result, var, s2, wid);
        s2[result->width] = '\0';
    }
    return (s2);
}

void *fill_zero_or_space(t_flag *result, char *s2)
{
    free(s2);
    s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
    if (result->flag_zero == 1 && result->flag_left == 0)
        s2 = ft_memset(s2, '0', result->width);
    else
        s2 = ft_memset(s2, ' ', result->width);
    return (s2);
}

void *insert_d_width(t_flag *result, char *var, char *s2, int wid)
{
    int i;
    int j;
    int len;

    len = ft_strlen(var);
    i = 0;
    j = 0;
    if (result->flag_space == 1 && result->flag_sign == 0 && ft_atoi(var) >= 0)
        s2[j++] = ' ';
    if (result->flag_zero == 1 && result->flag_sign == 1 && ft_atoi(var) >= 0)
        s2[j++] = '+';
    else if (result->flag_zero == 1 && ft_atoi(var) < 0) {
        s2[j++] = '-';
       i++;
    }
    if (result->flag_left == 1)
    {
        while (i != len)
            s2[j++] = var[i++];
    }
    else
        s2 = insert_d_width_no_left(result, s2, var, wid);
    return (s2);
}

void *insert_d(t_flag *result, char *var, char *s2, int wid)
{
    int i;
    int j;
    int len;

    len = ft_strlen(var);
    i = 0;
    j = 0;
    if (result->flag_space == 1 && result->flag_sign == 0 && ft_atoi(var) >= 0)
        s2[j++] = ' ';
    if (result->flag_left == 1)
    {
        while (i != len)
            s2[j++] = var[i++];
    }
    else
        s2 = insert_d_width_left(result, s2, var, wid);
    return (s2);
}