#include "ft_printf.h"

int		is_s_dec(char *tmp)
{
    int i;

    i = 0;
    while  (tmp[i])
    {
        if (tmp[i] == '.')
            return (1);
        i++;
    }
    return (0);
}