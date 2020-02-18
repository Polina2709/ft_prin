#include "ft_printf.h"

char	*ft_strsub_free(char *s, int start, int len)
{
    char	*cpy;
    int		i;

    i = 0;
    if (!s)
        return (NULL);
    if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (len)
    {
        cpy[i] = s[start + i];
        len--;
        i++;
    }
    cpy[i] = 0;
    free(s);
    return (cpy);
}