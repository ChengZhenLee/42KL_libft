#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	if (!needle || !needle[0])
		return (haystack);
	if (!haystack)
		return (NULL);
	while (haystack[++i])
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
