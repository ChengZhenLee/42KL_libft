#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	i = -1;
	if (!dest || !src)
		return (NULL);
	while (++i < n)
	{
		if (dest[i] == c)
			return (&dest[i + 1]);
		dest[i] = src[i];
	}
	return (NULL);
}
