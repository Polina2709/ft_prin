#include "ft_printf.h"

void *mem_xx_by_width(t_flag *result, char *new_var, char *s2, int wid)
{
    if (result->precision == 0)
        s2 = insert_xx_by_width_no_prec(result, new_var, s2, wid);
    else
    {
        free(s2);
        if (result->flag_hash == 1 && (result->width - result->precision == 0))
            result->width += 2;
        else if (result->flag_hash == 1 && (result->width - result->precision == 1))
            result->width += 1;
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_left == 1)
        {
            s2 = ft_memset(s2, ' ', result->width);
            s2 = ft_memset(s2, '0', result->precision);
        }
        else
        {
            s2 = ft_memset(s2, '0', result->width);
            s2 = ft_memset(s2, ' ', result->width - result->precision);
        }
        if (result->flag_left == 1)
            s2 = insert_xx_by_width_left(result, new_var, s2, wid);
        else
            s2 = insert_xx_by_width_no_left(result, new_var, s2, wid);
    }
    return (s2);
}

char *insert_xx_by_width_no_prec(t_flag *result, char *new_var, char *s2, int wid)
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

char *insert_xx_by_width_left(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    if (result->precision < wid)
    {
        while (i++ != wid)
            s2[i - 1] = new_var[i - 1];
    }
    else if (result->flag_left == 1 && result->precision >= wid)
    {
        if (result->flag_hash == 1)
        {
            result->precision += 2;
            s2[i++] = '0';
            s2[i++] = 'X';
            wid -= 2;
        }
        while (wid--)
            s2[result->precision - wid - 1] = new_var[i++];
    }
    s2[result->width] = '\0';
    return (s2);
}

char *insert_xx_by_width_no_left(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    if (result->precision < wid)
    {
        while (wid--)
            s2[result->width - wid - 1] = new_var[i++];
    }
    else if (result->precision >= wid)
    {
        if (result->flag_hash == 1)
        {
            s2[result->width - result->precision - 2] = '0';
            s2[result->width - result->precision - 1] = 'X';
            i += 2;
            wid -= 2;
        }
        while (wid--)
            s2[result->width - wid - 1] = new_var[i++];
    }
    s2[result->width] = '\0';
    return (s2);
}