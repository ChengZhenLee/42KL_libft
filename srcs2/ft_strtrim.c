#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;
	char	*res;

	i = -1;
	size = 0;
	while (s[++i])
	{
		if (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
			j++;
	}
	res = (char *)malloc(sizeof(char) * (j + 1));
	if (!res)
		return (NULL);
	else
		res[j] = '\0';
	i = -1;
	j = -1;
	while (s[++i])
	{
		if (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
			res[++j] = s[i];
	}
	return (res);
}
