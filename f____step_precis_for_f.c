#include "ft_printf.h"

char			*preciz_part2(char *tmp, int ct)
{
    if (ct >= 6)
    {
        increm_s(tmp, ct);
        while (ct > 6)
        {
            tmp = ft_strjoin_free(tmp, "0");
            ct--;
        }
    }
    if (ct <= 6)
    {
        increm_s(tmp, ct);
        ct = 6 - ct;
        tmp = ft_strsub_free(tmp, 0, strln(tmp) - ct);
        return (tmp);
    }
    return (tmp);
}

char		*step_precis_for_f(t_flag *result, char *tmp)
{
    int ct;

    if (result->precision == 0 && (result->prec == 1))
    {
        if (ft_locate_char_index(tmp, '.') != -41)
        {
            if (tmp[ft_locate_char_index(tmp, '.') + 1] >= '5')
                increm_s(tmp,1);
        }
        if (result->flag_hash == 1)
            tmp = ft_strsub_free(tmp, 0, ft_locate_char_index(tmp, '.') + 1);
        else
            tmp = ft_strsub_free(tmp, 0, ft_locate_char_index(tmp, '.'));
    }
    else if (result->precision > 0)
    {
        ct = result->precision;
        tmp = preciz_part2(tmp, ct);
    }
    return (tmp);
}