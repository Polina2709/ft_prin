#include "ft_printf.h"

char		*ft_itoa_long(long n)
{
    unsigned long num;
    char *s;
    int len;
    int negative;

    if (n == 0)
        return (ft_zero(s));
    negative = ft_neg(n, &num);
    len = ft_len_of_itoa(num) + negative;
    if (!(s = ft_memset(s, ' ', len + 1)))
        return (NULL);
    s[len--] = '\0';
    while (num != 0)
    {
        if (negative)
            s[0] = '-';
        if (num > 0)
            s[len--] = '0' + (num % 10);
        num = num / 10;
    }
    return (s);
}

char	*ft_zero(char *s)
{
    s = (char*)ft_memalloc(sizeof(char) * 2);
    ft_strcpy(s, "0");
    return (s);
}

int	ft_len_of_itoa(unsigned long num)
{
    int	i;

    i = 0;
    while (num > 0)
    {
        i++;
        num /= 10;
    }
    return (i);
}

int	ft_neg(long n, unsigned long *num)
{
    if (n < 0)
    {
        *num = -n;
        return (1);
    }
    *num = n;
    return (0);
}