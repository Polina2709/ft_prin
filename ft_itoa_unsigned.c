#include "ft_printf.h"

char		*ft_itoa_unsigned(unsigned int n)
{
    char	*s;
    int		len;
    unsigned num;

    num = n;
    len = ft_nbrlen_unsigned(num);
    if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    s[len--] = '\0';
    if (n == 0)
    {
        s[0] = '0';
        return (s);
    }
    while (num != 0)
    {
        if (num > 0)
            s[len--] = '0' + (num % 10);
        num = num / 10;
    }
    return (s);
}

int	ft_nbrlen_unsigned(unsigned int n)
{
    int	len;

    len = 0;
    if (n <= 0)
        len++;
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}