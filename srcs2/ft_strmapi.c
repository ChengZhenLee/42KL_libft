#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*res;

	i = 0;
	while (s[i])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = (*f)(i, s[i]);
	return (s);
}
