#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	len;
	
	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}
