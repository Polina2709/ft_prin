#include "ft_printf.h"

unsigned long int ft_atoi_unsigned(const char *str)
{
    unsigned long int	nb;

    nb = 0;
    while (*str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' ||
           *str == '\f' || *str == ' ')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        nb = nb * 10 + *str - '0';
        str++;
    }
    return (nb);
}