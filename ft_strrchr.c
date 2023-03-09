#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*res;
	int	i;

	res = &s[strlen(s)];
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			res = &s[i];
	}
	return (res);
}
