#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*res;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s1[j++])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = -1;
	while (s2[++j])
		res[i++] = s2[j];
	res[i] = '\0';
}
