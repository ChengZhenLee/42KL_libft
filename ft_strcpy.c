#include "libft.h"

char	*strcpy(char *dest, const char *src)
{
	int	i;
	
	if (!dest || !src)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
