#include "ft_printf.h"

char		*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_nbrlen(n);
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	while (n != 0)
	{
		if (n < 0)
		{
			s[0] = '-';
			s[len--] = '0' + -(n % 10);
		}
		if (n > 0)
			s[len--] = '0' + (n % 10);
		n = n / 10;
	}
	return (s);
}
