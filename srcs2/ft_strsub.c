#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i - start < len)
	{
		res[i - start] = s[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}
