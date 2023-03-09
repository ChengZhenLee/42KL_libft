#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (dest[i])
		i++;
	while (i < size - 1)
		dest[i++] = src[i];
	dest[i] = '\0';
	return (i);
}
