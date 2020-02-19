#include "ft_printf.h"

char	*ft_strrev(char *str)
{
    int		i;
    int		length;
    char	buff;

    i = 0;
    length = ft_strlen(str);
    while (length - 1 > i)
    {
        buff = str[i];
        str[i] = str[length - 1];
        str[length - 1] = buff;
        length--;
        i++;
    }
    return (str);
}