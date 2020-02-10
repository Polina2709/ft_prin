#include "ft_printf.h"

int ft_printf(const char *format, ... )
{
    char *format_line;
    t_flag *result;
    int len;
    char *ret;

    ret = (char *)malloc(sizeof(char *));
    result = malloc(sizeof(t_flag));
    va_list ap;
    va_start(ap, format);
    format_line = (char *)format;
    ret = write_usual_text(format_line, ap, result, ret);
    len = ft_strlen(ret);
    write(1, ret, len);
    free(ret);
    va_end(ap);
    free(result);
    return(0);
}

void *write_usual_text(char *format_line, va_list ap, t_flag *result, char *ret)
{
    while (*format_line != '\0')
    {
        if (*format_line != '%')
            ret = ft_symbol_join(ret, *format_line++);
        else if (*format_line == '%' && *(format_line + 1) == '%')
        {
            ret = ft_symbol_join(ret, *format_line);
            format_line = format_line + 2;
        }
        else
        {
            ret = add_processed(format_line + 1, ap, result, ret);
            while (ft_strchr(FLAGS, *format_line))
                format_line++;
            format_line++;
        }
    }
    return (ret);
}

void *add_processed(char *format_line, va_list ap, t_flag *result, char *ret)
{
    char *s2;

    s2 = (char *)malloc(sizeof(char *) * 2);
    s2 = skip_to_find_type(format_line, ap, result, s2);
    ret = ft_strjoin(ret, s2);
    return (ret);
}

void *ft_symbol_join(char *ret, char symbol)
{
    size_t len;
    char *tmp;
    int i;

    i = 0;
    len = ft_strlen((const char *)ret);
    if (!(tmp = (char *)malloc(sizeof(char *) * (len + 2))))
            return (NULL);
    while (*ret != '\0')
        tmp[i++] = *ret++;
    tmp[i] = symbol;
    tmp[++i] = '\0';
    return (tmp);
}



 /*
char *work_with_s(char *to_s, va_list ap, t_flag *result, char *s2)
{
//    char *line_to_c;
    int wid;

 //   line_to_c = to_c;
    result->width = 1;
    while (*to_s != 'c')
    {
        if (*to_s == '-')
            result->flag_left = 1;
        else if (*to_s == '+')                                      //не надо наверное
            result->flag_sign = 1;
        else if (*to_s == '0')
            result->flag_zero = 1;
        else if (*to_s == ' ')                                      //а надо ли
            result->flag_space = 1;
        else if (*to_s == '#')
            result->flag_hash = 1;                                      //мб некоторые можно вобще убрать или в элзе запихнуть
        else if (*to_s == '*' && *to_s - 1 != '.')
        {
            wid = va_arg(ap, int);
            result->width = wid;
        }
        else if (ft_isdigit(*to_s))
        {
            result->width = ft_atoi(to_s);
            while (ft_isdigit(*to_s))
                to_s++;                                                                                                        //можно сократить
            continue;
        }
        else if (*to_s == '*' && *to_s - 1 != '.')              //тоже можно убрать
                   result->width_star = 1;
        else if (*to_s++ == '.')                                     //зачем точность в char, тогда и .*
       {
            while (*to_s >= 0 && *to_s <= 9)
                to_s++;
       }
        // тут надо с hh,ll ...
        to_s++;
    }
    return (s_flags(ap,result, s2));
}

void *s_flags(va_list ap, t_flag *result, char *s2)
{
    char var;
    int wid;

    var = (char)va_arg(ap, int);
    if (result->width > 1)
    {
        free(s2);
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_zero == 1 && result->flag_left == 0)
            s2 = ft_memset(s2, '0', result->width);
        else
            s2 = ft_memset(s2, ' ', result->width);
    }
    if (result->flag_left == 1)
        s2[0] = var;
    else // if (result->flag_left == 0)
        s2[result->width - 1] = var;
    s2[result->width] = '\0';
    return (s2);
}
*/