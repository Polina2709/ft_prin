#include "ft_printf.h"

char			*third_step_part2(t_flag *result, char *tmp)
{
    if (result->width > strln(tmp))
    {
        if (result->flag_zero == 1)
        {
            if (result->flag_left == 1)
                tmp = add_end(tmp, result->width - strln(tmp));
            else
                tmp = add_0_space(tmp, result->width - strln(tmp));
        }
        else
        {
            if (result->flag_left == 1)
                tmp = add_end(tmp, result->width - strln(tmp));
            else
                tmp = add_start(tmp, result->width - strln(tmp));
        }
    }
    return (tmp);
}

char *third_step_for_f(t_flag *result, char *tmp)
{
    if (result->precision == 0 && result->prec == 0)
    {
        if (result->flag_zero == 1)
        {
            if (result->width > strln(tmp))
                tmp = add_0_space(tmp, result->width - strln(tmp));
        }
        else if (result->width > strln(tmp))
        {
            if (result->flag_left == 1)
                tmp = add_end(tmp, result->width - strln(tmp));
            else
                tmp = add_start(tmp, result->width - strln(tmp));
        }
    }
    else
        tmp = third_step_part2(result, tmp);
    return (tmp);
}

char	*second_step_for_f(char *tmp)
{
    int count;
    char *new;

    count = 0;
    new = NULL;
    if (count_after_dot(tmp) == 0)
        new = ft_strjoin(tmp, ".000000");
    else if (count_after_dot(tmp) > 0 && count_after_dot(tmp) < 6)
    {
        count = 6 - count_after_dot(tmp);
        new = ft_strjoin(tmp, "0");
        while (count != 1)
        {
            new = ft_strjoin_free(new, "0");
            count--;
        }
    }
    if (count_after_dot(tmp) >= 6) {
        free(new);
        return (tmp);
    }
    free(tmp);
    return (new);
}

char *first_step_for_f(t_flag *result, char *tmp)
{
    char *ptr;

    if (result->flag_sign == 1)
    {
        if (tmp[0] != '-')
        {
            ptr = ft_strjoin("+", tmp);
            free(tmp);
            return (ptr);
        }
    }
    else if (result->flag_space == 1)
    {
        if (tmp[0] != '-')
        {
            ptr = ft_strjoin(" ", tmp);
            free(tmp);
            return (ptr);
        }
    }
    return (tmp);
}

char    *f_flags(t_flag *flag, char *tmp)
{
    tmp = first_step_for_f(flag, tmp); // + or -
    tmp = second_step_for_f(tmp); // init precision
    tmp = step_precis_for_f(flag, tmp); //записываем нужную точность согласно флагам
    tmp = third_step_for_f(flag, tmp);
    // tmp = cut_for_precis_f(flag, tmp);
    return (tmp);

}