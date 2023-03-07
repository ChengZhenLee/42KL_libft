#include "ftlib.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = -1;
	if (!dest || !src)
		return (NULL);
	while (++i < n)
		dest[i] = src[i];
	return (dest);
}
