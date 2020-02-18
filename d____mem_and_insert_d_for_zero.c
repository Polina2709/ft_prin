#include "ft_printf.h"

void *mem_and_insert_d_for_zero(t_flag *result, char *var, int wid, char *s2)
{
    if (result->width < 2)
    {
        if (result->flag_sign == 1)
            s2 = ft_strcpy(s2, "+");
        else
        {
            free(s2);
            s2 = ft_memset(s2, '\0', 1);
        }
    }
    else
    {
        free(s2);
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        s2 = ft_memset( s2, ' ', result->width + 1);
        if (result->flag_sign == 1 && result->flag_left == 0)
            s2[result->width - 1] = '+';
        else if (result->flag_sign == 1 && result->flag_left == 1)
            s2[0] = '+';
    }
    s2[result->width] = '\0';
    return (s2);
}