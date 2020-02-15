#include "ft_printf.h"

char	*ft_itoa_base(unsigned long int value, int base)
{
    int					i;
    char				*str;
    unsigned long int	tmp;

    i = 0;
    tmp = value;
    while (tmp >= base)
    {
        tmp = tmp / base;
        i++;
    }
    if (!(str = (char *)ft_memalloc(sizeof(char) * (i + 1))))
        return (NULL);
    str[i + 1] = '\0';
    while (i >= 0)
    {
        tmp = value % base;
        str[i] = convert(tmp);
        value /= base;
        i--;
    }
    return (str);
}

char convert(unsigned long int nb)
{
    if (nb >= 10)
        return ((char)(nb - 10 + 'a'));
    else
        return ((char)(nb + '0'));
}