#include "ft_printf.h"

int	ft_locate_char_index(char *s, char c)
{
    int i;

    i = 0;
    if (!s)
        return (-42);
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return (-41);
}