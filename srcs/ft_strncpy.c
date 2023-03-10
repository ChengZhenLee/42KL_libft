#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return (NULL);
	while (src[i] && i < n)
		dest[i++] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
