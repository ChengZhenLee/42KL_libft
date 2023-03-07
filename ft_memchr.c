#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	int	i;

	i = -1;
	if (!s)
		return (NULL);
	while (++i < n)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
