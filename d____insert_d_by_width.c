#include "ft_printf.h"

void *insert_d_by_width(t_flag *result, char *s2, char *var_p, int wid_p)
{
    int i;

    i = 0;
    if (result->flag_left == 1)
		s2 = insert_d_by_width_left_first(result, s2, var_p, wid_p);
    else
 		s2 = insert_d_by_width_no_left(result, s2, var_p, wid_p);
    s2[result->width + 1] = '\0';
    return (s2);
}

void *insert_d_by_width_left_first(t_flag *result, char *s2, char *var_p, int wid_p)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (result->flag_sign == 1 && ft_atoi(var_p) >= 0)
		s2[j++] = '+';
	if (ft_atoi(var_p) < 0)
	{
		s2[j++] = '-';
		wid_p--;
		i++;
	}
	if (wid_p > result->precision && ft_atoi(var_p) >= 0)
	{
		while (i != wid_p)
			s2[j++] = var_p[i++];
	}
	else if (wid_p > result->precision && ft_atoi(var_p) < 0)
	{
		while (i != wid_p + 1)
			s2[j++] = var_p[i++];
	}
	else
		s2 = insert_d_by_width_left_second(result, s2, var_p, wid_p);
	return (s2);
}

void *insert_d_by_width_left_second(t_flag *result, char *s2, char *var_p, int wid_p)
{
	int i;

	i = 0;
	if (ft_atoi(var_p) < 0)
	{
		wid_p--;
		i++;
	}
	if (result->flag_sign == 1 || ft_atoi(var_p) < 0)
	{
		while (wid_p--)
			s2[result->precision - wid_p] = var_p[i++];
	}
	else
	{
		while (wid_p--)
			s2[result->precision - wid_p - 1] = var_p[i++];
	}
	return (s2);
}

void *insert_d_by_width_no_left(t_flag *result, char *s2, char *var_p, int wid_p)
{
	int i;

	i = 0;
	if (result->flag_sign == 1 || ft_atoi(var_p) < 0)
	{
		if (wid_p > result->precision && ft_atoi(var_p) >= 0)
			s2[result->width - wid_p - 1] = '+';
		else if (wid_p > result->precision && ft_atoi(var_p) < 0)
		{
			s2[result->width - wid_p] = '-';
			i++;
			wid_p--;
		}
		else if (wid_p <= result->precision && ft_atoi(var_p) >= 0)
			s2[result->width - result->precision - 1] = '+';
		else if (wid_p <= result->precision && ft_atoi(var_p) < 0)
		{
			s2[result->width - result->precision - 1] = '-';
			i++;
			wid_p--;
		}
	}
	while (wid_p--)
		s2[result->width - wid_p - 1] = var_p[i++];
	return (s2);
}