#include "ft_printf.h"

char *work_with_o(char *to_c, va_list ap, t_flag *result, char *s2)
{
    char *var;
    int tmp;

    initialize_result(result, to_c, ap);
    if (result->size == 3 || result->size == 4)
        var = ft_itoa_long(va_arg(ap, long));
    else if (result->size == 1)
        var = ft_itoa_long((short int)va_arg(ap, long));
    else if (result->size == 2)
        var = ft_itoa_long((char)va_arg(ap, long));
    else
        {
        tmp = va_arg(ap, int);
        var = ft_itoa_unsigned(tmp);
    }
    return (o_flags(ap, result, s2, var));
}

void *o_flags(va_list ap, t_flag *result, char *s2, char *var)
{
//    char *var;
    int wid;
    char *new_var;
    unsigned long int nbr;
/*
    if (var[0] == '-')
        nbr = ft_atoi(var);
    else
 */       nbr = ft_atoi_unsigned(var);
                                            //    var = ft_itoa_unsigned((unsigned int)va_arg(ap, int));
                                            //    new_var = ft_itoa_unsigned(convert_int_to_octal(ap, result, var));
    new_var = ft_itoa_base(nbr, 8);
    if (result->flag_hash == 1)
        new_var = ft_strjoin("0", new_var);
    wid = ft_strlen(new_var);
    if (result->width >= result->precision && result->width >= wid)
        s2 = mem_and_insert_o_by_width(result, new_var, s2, wid);
    else if (wid > result->width && wid >= result->precision)
        s2 = mem_and_insert_o_by_wid(result, new_var, s2, wid);
    else
        s2 = mem_and_insert_o_by_precision(result, new_var, s2, wid);
    return (s2);
}

unsigned long int convert_int_to_octal(va_list ap, t_flag *result, char *var)
{
    unsigned long int res;
    unsigned int del;
    unsigned int nbr;
    unsigned int k;

    del = 8;
    k = 1;
    res = 0;
    nbr = ft_atoi_unsigned(var);
    while (nbr)
    {
        res += (nbr % del) * k;
        k *= 10;
        nbr /= del;
    }
    return (res);
}

void *mem_and_insert_o_by_width(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    if (result->precision == 0) {
        free(s2);
        s2 = (char *) malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_zero == 1 && result->flag_left == 0)
            s2 = ft_memset(s2, '0', result->width);
        else
            s2 = ft_memset(s2, ' ', result->width);
        if (result->flag_left == 1) {
            while (i++ != wid)
                s2[i - 1] = new_var[i - 1];
        } else {
            while (wid--)
                s2[result->width - wid - 1] = new_var[i++];
        }
    }
    else
    {
        free(s2);
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_left == 1)
        {
            s2 = ft_memset(s2, ' ', result->width);
            s2 = ft_memset(s2, '0', result->precision);
        }
        else
        {
            s2 = ft_memset(s2, '0', result->width);
            s2 = ft_memset(s2, ' ', result-> width - result->precision);
        }
        if (result->flag_left == 1)
        {
            if (result->precision >= wid)
            {
                while (wid--)
                    s2[result->precision - wid - 1] = new_var[i++];
            } else
            {
                while (i++ != wid)
                    s2[i - 1] = new_var[i - 1];
            }
        } else {
            while (wid--)
                s2[result->width - wid - 1] = new_var[i++];
        }
    }

    s2[result->width] = '\0';
    return (s2);
}

void *mem_and_insert_o_by_wid(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    free(s2);
    s2 = (char *)malloc(sizeof(char *) * (wid + 1));
    while (i++ != wid)
        s2[i - 1] = new_var[i - 1];
    s2[wid] = '\0';
    return (s2);
}

void *mem_and_insert_o_by_precision(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    free(s2);
    s2 = (char *)malloc(sizeof(char *) * (result->precision + 1));
    s2 = ft_memset(s2, '0', result->precision);
    while (wid--)
        s2[result->precision - wid - 1] = new_var[i++];
    s2[result->precision] = '\0';
    return (s2);
}