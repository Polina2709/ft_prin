#include "ft_printf.h"

int	ft_char_sign(const char *str)
{
	if (str)
	{
		if (*str == '-')
			return (-1);
		if (*str == '+')
			return (1);
	}
	return (0);
}
