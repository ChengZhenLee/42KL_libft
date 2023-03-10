#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*res;

	i = 0;
	while (s[len])
		len++;
	res = (char *)(malloc)(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = (*f)(s[i]);
	return (res);
}
