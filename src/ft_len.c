#include "ft_printf.h"

int	strln(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int	strln_x(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        return (i - 2);
    return (i);
}

int	strln_sps(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    if (s[0] == '-' || s[0] == '+' || s[0] == ' ')
        return (i - 1);

    return (i);
}