#include "ft_printf.h"

char	*add_end(char *s, int nb_space)
{
    char *temp;
    char *new;

    new = NULL;
    if (!(temp = (char *)malloc(sizeof(char) * (nb_space) + 1)))
        return (NULL);
    temp[nb_space] = 0;
    while (nb_space != 0)
    {
        temp[nb_space - 1] = ' ';
        nb_space--;
    }
    new = ft_strjoin(s, temp);
    free(temp);
    free(s);
    return (new);
}