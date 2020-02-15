#include "ft_printf.h"


void *d_flags_precision(va_list ap, t_flag *result, char *s2, char *var)
{
    int wid_p;

    wid_p = ft_strlen(var);

    if (result->precision < wid_p && result->width <= 1)
        s2 = mem_and_insert_d_by_wid(result, s2, var, wid_p);
    else if (result->precision < result->width)
        s2 = mem_for_d_by_width(result, s2, var, wid_p);
    else if (result->precision >= result->width)
        s2 = mem_for_d_by_precision(result, s2, var, wid_p);
    return (s2);
}


void *mem_and_insert_d_by_wid(t_flag *result, char *s2, char *var_p, int wid_p)
{
    int i;
    int j;

    j = 0;
    i = 0;
    free(s2);
    if (result->flag_sign == 1 && ft_atoi(var_p) >= 0) {
        s2 = (char *) malloc(sizeof(char *) * (wid_p + 2));
        s2 = ft_memset(s2, '0', wid_p);
        s2[j++] = '+';
        s2[wid_p + 1] = '\0';

    }
    else
    {
        s2 = (char *) malloc(sizeof(char *) * (wid_p + 1));
        s2 = ft_memset(s2, '0', wid_p);
        s2[wid_p] = '\0';

    }
    while (i != wid_p)
        s2[j++] = var_p[i++];
    return (s2);
}

void *mem_for_d_by_width(t_flag *result, char *s2, char *var_p, int wid_p)
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
    s2 = insert_d_by_width(result, s2, var_p, wid_p);
    return (s2);
}

void *insert_d_by_width(t_flag *result, char *s2, char *var_p, int wid_p)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (result->flag_left == 1)
    {
        if (result->flag_sign == 1 && ft_atoi(var_p) >= 0)
            s2[j++] = '+';
        if (ft_atoi(var_p) < 0)
        {
            s2[j++] = '-';
           wid_p--;
            i++;
        }
        if (wid_p > result->precision && ft_atoi(var_p) >= 0)
        {
            while (i != wid_p)
                s2[j++] = var_p[i++];
        }
        else if (wid_p > result->precision && ft_atoi(var_p) < 0)
        {
            while (i != wid_p + 1)
                s2[j++] = var_p[i++];
        }
        else{
            if (result->flag_sign == 1 || ft_atoi(var_p) < 0) {
                while (wid_p--)
                    s2[result->precision - wid_p] = var_p[i++];
            }
            else
            {
                while (wid_p--)
                    s2[result->precision - wid_p - 1] = var_p[i++];
            }
        }
    }
    else
    {
        if (result->flag_sign == 1 || ft_atoi(var_p) < 0) {
            if (wid_p > result->precision && ft_atoi(var_p) >= 0)
                s2[result->width - wid_p - 1] = '+';
            else if (wid_p > result->precision && ft_atoi(var_p) < 0)
            {
                s2[result->width - wid_p] = '-';
                i++;
                wid_p--;
            }
            else if (wid_p <= result->precision && ft_atoi(var_p) >= 0)
                s2[result->width - result->precision - 1] = '+';
            else if (wid_p <= result->precision && ft_atoi(var_p) < 0)
            {
                s2[result->width - result->precision - 1] = '-';
                i++;
                wid_p--;
            }
        }
            while (wid_p--)
                s2[result->width - wid_p - 1] = var_p[i++];

    }
    s2[result->width + 1] = '\0';
    return (s2);
}

void *mem_for_d_by_precision(t_flag *result, char *s2, char *var_p, int wid_p)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (result->flag_sign == 1 || ft_atoi(var_p) < 0) {
        s2 = (char *) malloc(sizeof(char *) * (result->precision + 2));
        s2 = ft_memset(s2, '0', result->precision + 2);
            s2[0] = '+';
        if (ft_atoi(var_p) < 0) {
            s2[i++] = '-';
            wid_p--;
        }
        while (wid_p--)
            s2[result->precision - wid_p] = var_p[i++];
        s2[result->precision + 1] = '\0';
    }
    else {
        s2 = (char *) malloc(sizeof(char *) * (result->precision + 1));
        s2 = ft_memset(s2, '0', result->precision + 1);
        while (wid_p--)
            s2[result->precision - wid_p - 1] = var_p[i++];
        s2[result->precision] = '\0';
    }
    return (s2);
}

