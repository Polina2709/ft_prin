#include "ft_printf.h"

char *p_record(va_list ap, char *s2)
{
    char *tmp;
    char *base;
    unsigned long adr;
    int i;

    if (!(tmp = va_arg(ap, void *)))
    return (ft_strdup("0x0"));
    adr = (unsigned long)tmp;
    free(s2);
    if (!(s2 = (char *)malloc(sizeof(char) * malloc_count(adr) + 1)))
        return (0);
    s2[malloc_count(adr)] = 0;
    base = "0123456789abcdef";
    i = 0;
    while (adr >= 1)
    {
        s2[i] = base[(adr % 16)];
        adr = (adr - (adr % 16)) / 16;
        i++;
    }
    ft_strrev(s2);
    s2 = ft_strjoin_free2("0x", s2);
    return (s2);
}