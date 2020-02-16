#include "ft_printf.h"

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