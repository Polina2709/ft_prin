#include "ft_printf.h"

void *skip_to_find_type(char *format_line, va_list ap, t_flag *result, char *s2)
{
    char *type_in_line;

    type_in_line = format_line;
    zero_result(result);

    while (ft_strchr(FLAGS, *type_in_line))
        type_in_line++;
    if (*type_in_line == 'c')
        return(work_with_c(format_line, ap, result, s2));
    else if (*type_in_line == 's')
        return(work_with_s(format_line, ap, result, s2));
    else if (*type_in_line == 'd' || *type_in_line == 'i')
        return(work_with_d(format_line, ap, result, s2));
//    else if (*type_in_line == 'p')
 //       return(work_with_d(format_line, ap, result, s2));
    else if (*type_in_line == 'o')
        return (work_with_o(format_line, ap, result, s2));
    else if (*type_in_line == 'x')
        return (work_with_x(format_line, ap, result, s2));

    return (0);
}

void zero_result(t_flag *result)
{
    result->flag_left = 0;
    result->flag_sign = 0;
    result->flag_zero = 0;
    result->flag_space = 0;
    result->flag_hash = 0;
    result->width_star = 0;
    result->width = 0;
    result->prec = 0;
    result->precision = 0;
    result->size = 0;
}

void initialize_result(t_flag *result, char *format_line, va_list ap)
{
    int wid;

    result->width = 1;
    while (ft_strchr(FLAGS, *format_line))
    {
        initialize_flags_in_result(result, format_line);
        if (*format_line == '0')
            result->flag_zero = 1;
         else if (*format_line == '*' && *format_line - 1 != '.')
                wid = initialize_width_star_in_result(result, format_line, ap, wid);
        else if (ft_isdigit(*format_line))
        {
            result->width = ft_atoi(format_line);
            while (ft_isdigit(*format_line))
                format_line++;
            continue;
        }
        format_line = initialize_precision_in_result(result, format_line, ap);
        format_line = initialize_type_flags_in_result(result, format_line);
        format_line++;
    }
}

int initialize_width_star_in_result(t_flag *result, char *format_line, va_list ap, int wid)
{
    wid = (int)va_arg(ap, int);
    if (wid < 0)
    {
        result->flag_left = 1;
        wid *= -1;
    }
    result->width = wid;
    result->width_star = 1;
    return (wid);
}

void initialize_flags_in_result(t_flag *result, char *format_line)
{
        if (*format_line == '-')
            result->flag_left = 1;
        else if (*format_line == '+')
            result->flag_sign = 1;
        else if (*format_line == ' ')
            result->flag_space = 1;
        else if (*format_line == '#')
            result->flag_hash = 1;

}


void *initialize_precision_in_result(t_flag *result, char *format_line, va_list ap)
{
    int prec;

    if (*format_line == '.' && *(format_line + 1) == '*')
    {
        prec = va_arg(ap, int);
        if (prec < 0) {
            result->flag_left = 1;
            prec *= -1;
        }
        result->prec = 1;
        format_line++;
        result->precision = prec;
    }
    else if (*format_line == '.')
    {
        format_line++;
        result->precision = ft_atoi(format_line);
        result->prec = 1;
        while (ft_isdigit(*format_line))
            format_line++;
        format_line--;
    }
    return (format_line);
}


void *initialize_type_flags_in_result(t_flag *result, char *format_line)
{
    if (*format_line == 'h')
    {
        if (*(format_line + 1) == 'h')
        {
            result->size = 2;
            format_line++;
        }
        else
            result->size = 1;
    }
    else if (*format_line == 'l')
    {
        if (*(format_line + 1) == 'l')
        {
            result->size = 4;
            format_line++;
        }
        else
            result->size = 3;
    }
    return (format_line);
}