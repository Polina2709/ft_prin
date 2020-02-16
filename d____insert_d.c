#include "ft_printf.h"

void *insert_d(t_flag *result, char *var, char *s2, int wid)
{
	int i;
	int j;
	int len;

	len = ft_strlen(var);
	i = 0;
	j = 0;
	if (result->flag_space == 1 && result->flag_sign == 0 && ft_atoi(var) >= 0)
		s2[j++] = ' ';
	if (result->flag_left == 1)
	{
		while (i != len)
			s2[j++] = var[i++];
	}
	else
		s2 = insert_d_width_left(result, s2, var, wid);
	return (s2);
}