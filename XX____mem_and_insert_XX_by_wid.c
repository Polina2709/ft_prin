#include "ft_printf.h"

void *mem_and_insert_xx_by_wid(t_flag *result, char *new_var, char *s2, int wid)
{
    int i;

    i = 0;
    free(s2);
    s2 = (char *)malloc(sizeof(char *) * (wid + 1));
    while (i++ != wid)
        s2[i - 1] = new_var[i - 1];
    s2[wid] = '\0';
    return (s2);
}