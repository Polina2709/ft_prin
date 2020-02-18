#include "ft_printf.h"

int		malloc_count(unsigned long adr)
{
    int	count;
    int	r;

    count = 0;
    while (adr >= 1)
    {
        r = adr % 16;
        adr = (adr - r) / 16;
        count++;
    }
    return (count);
}