#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	len;
	char	*res;
	int	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * len);
	i = -1;
	while (s[++i])
		res[i] = s[i];
	return (res);
}
