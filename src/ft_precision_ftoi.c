#include "ft_printf.h"

long int		prec_ftoi(long double d)
{
    int			neg;
    int			i;
    long int	tmp;

    i = -1;
    neg = (d < 0 ? -1 : 1);
    d *= neg;
    while (++i < 6)
        d *= 10;
    d += 0.5;
    d *= neg;
    tmp = (long int)d;
    while (tmp % 10 == 0 && tmp != 0)
        tmp /= 10;
    return (tmp);
}