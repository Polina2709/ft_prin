#include "ft_printf.h"

char	*add_start(char *s, int nb_space)
{
    int		i;
    int		j;
    char	*new;
    char	*temp;

    i = 0;
    j = 0;
    new = NULL;
    if (!(temp = (char *)malloc(sizeof(char) * (nb_space) + 1)))
        return (NULL);
    while (nb_space != 0)
    {
        temp[i] = ' ';
        i++;
        nb_space--;
    }
    temp[i] = 0;
    new = ft_strjoin(temp, s);
    free(temp);
    free(s);
    return (new);
}