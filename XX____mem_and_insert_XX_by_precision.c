#include "ft_printf.h"

void *mem_and_insert_XX_by_precision(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    free(s2);
    if (result->flag_hash == 1)
        result->precision += 2;
    s2 = (char *) malloc(sizeof(char *) * (result->precision + 1));
    s2 = ft_memset(s2, '0', result->precision);
    if (result->flag_hash == 1)
    {
        s2[0] = '0';
        s2[1] = 'x';
        i += 2;
        wid -= 2;
    }
    while (wid--)
        s2[result->precision - wid - 1] = new_var[i++];
    s2[result->precision] = '\0';
    return (s2);
}