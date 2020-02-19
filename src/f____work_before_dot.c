#include "ft_printf.h"


char	*record_before_dot_positive(long double f, long double nb, char *non_dec) //record_positive
{
    int i;

    i = 0;
    while (f >= 1)
    {
        while (count_before_dot(f) == count_before_dot(nb))
        {
            f = f - nb;
            non_dec[i]++;
        }
        i++;
        nb /= 10;
        if (nb == 0)
            break ;
    }
    return (non_dec);
}

char	*record_before_dot_negative(long double f, long double nb, char *non_dec)
{
    int i;

    i = 0;
    while (f <= -1)
    {
        while (count_before_dot(f) == count_before_dot(nb))
        {
            f = f + nb;
            non_dec[i]++;
        }
        i++;
        nb /= 10;
        if (nb == 0)
            break ;
    }
    return (non_dec);
}

char    *record_before_dot(long double f)
{
    char		*int_part;
    int			count;
    long double	nb;

    count = count_before_dot(f);
    if (count == 0 && f != 0)
        return (ft_strdup("0"));
    if (!(int_part = (char *)malloc(sizeof(char) *
                                    (count + 1))))
        return (NULL);
    nb = 1;
    ft_memset(int_part, '0', (size_t)count);
    int_part[count] = 0;
    while (count != 1)
    {
        nb = nb * 10;
        count--;
    }
    if (f > 0)
        return (record_before_dot_positive(f, nb, int_part));
    else if (f < 0)
        return (record_before_dot_negative(f, nb, int_part));
    return (NULL);
}


int				count_before_dot(long double f)
{
    int count;

    count = 0;
    if (f > 0)
    {
        while (f >= 1)
        {
            f /= 10;
            count++;
        }
    }
    else if (f < 0)
    {
        while (f <= -1)
        {
            f /= 10;
            count++;
        }
    }
    return (count);
}