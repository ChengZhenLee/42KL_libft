#include "ftlib.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest || !src)
		return (NULL);
	while (++i < n)
		dest[i] = src[i];
	return (dest);
}
