#include "ft_printf.h"

char *work_with_d(char *to_c, va_list ap, t_flag *result, char *s2)
{
    initialize_result(result, to_c, ap);
    return (d_flags(ap,result, s2));
}

void *d_flags(va_list ap, t_flag *result, char *s2)
{
    char *var;
    int wid;
    int tmp;
    int i;

    i = 0;
    var = ft_itoa(va_arg(ap, int));
//    tmp = ft_strcpy(tmp, var);
    if (tmp >= 0 && result->flag_sign == 1)
    {
        var[0] = '+';
        var[i + 1] = ft_atoi(tmp);
        i++;
    }
    wid = (int)ft_strlen(var);
    if (result->width < wid)
        result->width = wid;
    if (result->width > 1)
    {
        free(s2);
        s2 = (char *)malloc(sizeof(char *) * (result->width + 1));
        if (result->flag_zero == 1 && result->flag_left == 0)
            s2 = ft_memset(s2, '0', result->width);
        else
            s2 = ft_memset(s2, ' ', result->width);
    }
    s2 = insert_d(result, var, s2, wid);
    s2[result->width] = '\0';
    return (s2);
}

/*
void *insert_d(t_flag *result, char *var, char *s2, int wid)
{
    int i;
    int len;

    len = ft_strlen(var);
    i = 0;
    if (result->flag_left == 1) {
        if (result->flag_sign == 1)
        {
         //   if (var[i] == '-')
          //      s2[i++] = '-';
          //  else
                s2[0] = '+';
        }
        while (i != len)
        {
            s2[i] = var[i];
            i++;
        }
    }
    else
    {
        if (result->flag_sign == 1)
        {
 //           if (var[i++] == '-')
  //              s2[wid--] = '-';
//              else
                s2[result->width - wid] = '+';
        }
        while (wid-- != 0)
            s2[result->width - wid] = var[i++];
    }
    return (s2);
}
*/

void *insert_d(t_flag *result, char *var, char *s2, int wid) {
    int i;
    int len;

    len = ft_strlen(var);
    i = 0;
    if (result->flag_left == 1)
    {
        while (i != len)
        {
            s2[i] = var[i];
            i++;
        }
    }
    else
    {
        while (wid-- != 0)
            s2[result->width - wid - 1] = var[i++];
    }
    return (s2);
}