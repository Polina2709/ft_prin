#include "ft_printf.h"

int	count_after_dot(char *tmp)
{
    int j;
    int count;

    j = 0;
    count = 0;
    if (is_s_dec(tmp) == 0)
        return (0);
    while (tmp[j] != '.')
        j++;
    j++;
    while (tmp[j])
    {
        j++;
        count++;
    }
    return (count);
}