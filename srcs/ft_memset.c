#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	while (++i < n)
		s[i] = c;
	return (s);
}
