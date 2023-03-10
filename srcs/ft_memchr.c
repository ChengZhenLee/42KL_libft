#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

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
