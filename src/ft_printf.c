#include "ft_printf.h"

int ft_printf(const char *format, ... )
{
//    char *format_line;
    t_flag *result;
    int len;
    char *ret;

    ret = (char *)malloc(sizeof(char *));
    result = malloc(sizeof(t_flag));
    ret = "";
    va_list ap;
    va_start(ap, format);
 //   format_line = (char *)format;
    ret = write_usual_text(format, ap, result, ret);
    len = ft_strlen(ret);
    write(1, ret, len);
    va_end(ap);
    free(ret);
    free(result);
    return(0);
}

void *write_usual_text(char *format, va_list ap, t_flag *result, char *ret)
{
	char *format_line;
//	format_line = (char *)format;
    while (*format != '\0')
    {
        if (*format != '%')
            ret = ft_symbol_join(ret, *format++);
        else if (*format == '%' && *(format + 1) == '%')
        {
            ret = ft_symbol_join(ret, *format);
            format = format + 2;
        }
        else
        {
	        format_line = (char *)format;
        	while (ft_strchr(FLAGS, *format_line))
		        format_line++;
        	if (ft_strchr(TYPES, *format_line))
        	{
		        ret = add_processed(format + 1, ap, result, ret);
		        while (ft_strchr(FLAGS, *format))
			        format++;
		        format++;
	        }
	        else
	        	format++;
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
    free(s2);
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