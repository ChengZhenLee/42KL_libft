#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	int	i;

	i = -1;
	if (!s)
		return (NULL);
	while (++i < n)
		s[i] = c;
	return (s);
}
