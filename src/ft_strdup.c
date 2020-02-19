#include "ft_printf.h"

char	*ft_strdup(const char *src)
{
	size_t	length;
	char	*n_string;
	int		i;

	i = 0;
	length = ft_strlen(src);
	n_string = (char*)malloc(sizeof(char) * length + 1);
	if (!n_string)
		return (NULL);
	while (src[i] != '\0')
	{
		n_string[i] = src[i];
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}
