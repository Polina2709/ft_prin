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
    else if (*type_in_line == 'd')
        return(work_with_d(format_line, ap, result, s2));
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
    result->width = 0;              //мб тут ставить равным длине, мб в work_with_..
    result->prec_star = 0;
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
 //       initialize_width_in_result(result, format_line, ap);
        if (*format_line == '*' && *format_line - 1 != '.')
        {
            wid = va_arg(ap, int);
            result->width = wid;
        }
        else if (ft_isdigit(*format_line))
        {
            result->width = ft_atoi(format_line);
            while (ft_isdigit(*format_line))
                format_line++;                                                                                                        //можно сократить
            continue;
        }
        initialize_precision_in_result(result, format_line, ap);
        format_line++;
    }
}

void initialize_flags_in_result(t_flag *result, char *format_line)
{
        if (*format_line == '-')
            result->flag_left = 1;
        else if (*format_line == '+')                                      //не надо наверное
            result->flag_sign = 1;
        else if (*format_line == ' ')                                      //а надо ли
            result->flag_space = 1;
        else if (*format_line == '#')
            result->flag_hash = 1;
        else if (*format_line == '0')
            result->flag_zero = 1;
}


void initialize_precision_in_result(t_flag *result, char *format_line, va_list ap)
{
    int prec;

    if (*format_line == '*' && *format_line - 1 == '.')
    {
        prec = va_arg(ap, int);
        result->precision = prec;
    }
    else if (*format_line == '.')                                     //зачем точность в char, тогда и .*
    {
        prec = va_arg(ap, int);
        result->precision = ft_atoi(format_line);
        while (*format_line >= 0 && *format_line <= 9)
            format_line++;
    }
}
