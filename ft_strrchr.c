#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int	i;

	res = &s[ft_strlen(s)];
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			res = &s[i];
	}
	return (res);
}
