
#include "ft_printf.h"

int	ft_atoi(const char *str)
{
	int			a;
	long long	nb;

	a = 1;
	nb = 0;
	while (*str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' ||
			*str == '\f' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		a = ft_char_sign(str);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (nb * 10 + *str - '0' < nb)
		{
			if (a == 1)
				return (-1);
			return (0);
		}
		nb = nb * 10 + *str - '0';
		str++;
	}
	return ((int)(nb * a));
}
