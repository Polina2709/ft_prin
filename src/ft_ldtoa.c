#include "ft_printf.h"

char				*ft_ldtoa(long double f)
{
    char	*s;

    if (f == 0)
        return (ft_strdup("0"));
    s = record_before_dot(f);
    if (is_rest(f) == 1)
    {
        s = ft_strjoin(s, ".");
        s = ft_strjoin(s, record_rest(f));
        if ((get_rest(f) > 0 && get_rest(f) < 0.1) ||
            (get_rest_neg(f) > 0 && get_rest_neg(f) < 0.1))
            correct_record_rest(s);
    }
    if (f < 0)
        s = ft_strjoin("-", s);
    return (s);
}