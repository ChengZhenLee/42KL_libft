#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	int	i;

	res = (char *)malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < size)
		res[i] = '\0';
	return (res);
}
