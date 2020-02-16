#include "ft_printf.h"

void *s_flags(va_list ap, t_flag *result, char *s2)
{
    char *var;
    int wid;

    var = va_arg(ap, char *);
    wid = (int)ft_strlen(var);
    if (result->width < wid)
        result->width = wid;
    if (result->width > 1)
    {
        free(s2);
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_zero == 1 && result->flag_left == 0)
            s2 = ft_memset(s2, '0', result->width);
        else
            s2 = ft_memset(s2, ' ', result->width);
    }
    s2 = insert_s(result, var, s2, wid);
    s2[result->width] = '\0';
    return (s2);
}