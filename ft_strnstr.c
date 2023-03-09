#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;

	if (!needle || !needle[0])
		return (haystack);
	if (!haystack)
		return (NULL);
	i = -1;
	while (haystack[++i] && i < len)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j])
		{
			k++;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
