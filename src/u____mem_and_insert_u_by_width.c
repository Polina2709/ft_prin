#include "ft_printf.h"

void *mem_u_by_width(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    if (result->precision == 0)
        s2 = insert_u_by_width_no_prec(result, new_var, s2, wid);
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
        s2 = insert_u_by_width_with_prec(result, new_var, s2, wid);
    }
    return (s2);
}

char *insert_u_by_width_no_prec(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    free(s2);
    s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
    if (result->flag_zero == 1 && result->flag_left == 0)
        s2 = ft_memset(s2, '0', result->width);
    else
        s2 = ft_memset(s2, ' ', result->width);
    if (result->flag_left == 1)
    {
        while (i++ != wid)
            s2[i - 1] = new_var[i - 1];
    }
    else
    {
        while (wid--)
            s2[result->width - wid - 1] = new_var[i++];
    }
    s2[result->width] = '\0';
    return (s2);
}

char *insert_u_by_width_with_prec(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    if (result->flag_left == 1)
    {
        if (result->precision >= wid)
        {
            while (wid--)
                s2[result->precision - wid - 1] = new_var[i++];
        }
        else
        {
            while (i++ != wid)
                s2[i - 1] = new_var[i - 1];
        }
    }
    else
    {
        while (wid--)
            s2[result->width - wid - 1] = new_var[i++];
    }
    s2[result->width] = '\0';
    return (s2);
}