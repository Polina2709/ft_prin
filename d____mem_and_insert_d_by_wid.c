#include "ft_printf.h"

void *mem_and_insert_d_by_wid(t_flag *result, char *s2, char *var_p, int wid_p)
{
	int i;
	int j;

	j = 0;
	i = 0;
	free(s2);
	if (result->flag_sign == 1 && ft_atoi(var_p) >= 0)
	{
		s2 = (char *) malloc(sizeof(char *) * (wid_p + 2));
		s2 = ft_memset(s2, '0', wid_p);
		s2[j++] = '+';
		s2[wid_p + 1] = '\0';
	}
	else
	{
		s2 = (char *) malloc(sizeof(char *) * (wid_p + 1));
		s2 = ft_memset(s2, '0', wid_p);
		s2[wid_p] = '\0';
	}
	while (i != wid_p)
		s2[j++] = var_p[i++];
	return (s2);
}