#include "ft_printf.h"

void *insert_d_width_left(t_flag *result, char *s2, char *var, int wid)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(var);
	if (result->flag_space == 1 && ft_atoi(var) >= 0 && result->flag_sign == 0
		&& result->width + 1 > len && wid > 1)
	{
		wid -= 1;
		while (wid != 0)
		{
			s2[result->width - wid] = var[i++];
			wid--;
		}
	}
	else
	{
		while (wid-- != 0)
			s2[result->width - wid - 1] = var[i++];
	}
	return (s2);
}