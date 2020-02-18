#include "ft_printf.h"

int				is_rest(long double f)
{
    if (f > 0)
        if (get_rest(f) > 0)
            return (1);
    if (f < 0)
        if (get_rest_neg(f) > 0)
            return (1);
    return (0);
}


long double		get_rest_neg(long double f)
{
    int			count;
    long double	nb;

    nb = -1;
    count = count_before_dot(f);
    if (count == 0)
        return (-f);
    while (count != 1)
    {
        nb = nb * 10;
        count--;
    }
    while (f <= -1)
    {
        while (count_before_dot(f) == count_before_dot(nb))
            f = f - nb;
        nb /= 10;
        if (nb == 0)
            break ;
    }
    if (f == 0)
        return (0);
    return (-f);
}

long double		get_rest(long double f)
{
    int			count;
    long double	nb;

    nb = 1;
    count = count_before_dot(f);
    if (count == 0)
        return (f);
    while (count != 1)
    {
        nb = nb * 10;
        count--;
    }
    while (f >= 1)
    {
        while (count_before_dot(f) == count_before_dot(nb))
            f = f - nb;
        nb /= 10;
        if (nb == 0)
            break ;
    }
    if (f == 0)
        return (0);
    return (f);
}

void	correct_record_rest(char *s)
{
    int i;

    i = 0;
    while (s[i] != '.')
        i++;
    i++;
    s[i]--;
    return ;
}

char			*record_rest(long double f)
{
    long int nb;

    nb = 0;
    if (f > 0 && get_rest(f) < 0.1)
        nb = prec_ftoi(get_rest(f) + 0.1);
    else if (f < 0 && get_rest_neg(f) < 0.1)
        nb = prec_ftoi(get_rest_neg(f) + 0.1);
    else if (f > 0)
        nb = prec_ftoi(get_rest(f));
    else if (f < 0)
        nb = prec_ftoi(get_rest_neg(f));
    return (ft_ldtoa(nb));
}