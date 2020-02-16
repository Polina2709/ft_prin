#include "ft_printf.h"

void *mem_and_insert_d_by_precision(t_flag *result, char *s2, char *var_p, int wid_p)
{
	int i;

	i = 0;
	if (result->flag_sign == 1 || ft_atoi(var_p) < 0)
	{
		s2 = (char *) malloc(sizeof(char *) * (result->precision + 2));
		s2 = ft_memset(s2, '0', result->precision + 2);
		s2[0] = '+';
		if (ft_atoi(var_p) < 0)
		{
			s2[i++] = '-';
			wid_p--;
		}
		while (wid_p--)
			s2[result->precision - wid_p] = var_p[i++];
		s2[result->precision + 1] = '\0';
	}
	else
	{
		s2 = (char *) malloc(sizeof(char *) * (result->precision + 1));
		s2 = ft_memset(s2, '0', result->precision + 1);
		while (wid_p--)
			s2[result->precision - wid_p - 1] = var_p[i++];
		s2[result->precision] = '\0';
	}
	return (s2);
}