#include "ft_printf.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	a;

	if (!s1 || !s2)
		return (0);
	a = ft_strcmp(s1, s2);
	if (s1 && s2)
	{
		if (a == 0)
			return (1);
	}
	return (0);
}
