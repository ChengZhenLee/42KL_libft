#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (!dest || !src)
		return (NULL);
	while (dest[i])
		i++;
	while (str[j])
		dest[i++] = str[j++];
	dest[i] = '\0';
	return (dest);
}
