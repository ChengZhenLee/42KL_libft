#include "libft.h"

int	strcount(char const *s, char c)
{
	int	i;
	int	temp;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		if (temp < i)
			count++;
	}
	return (count);
}

int	strlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int	i;
	int	j;
	int	index;
	
	index = 0;
	res = (char **)malloc(sizeof(char *) * (strcount(s, c) + 1));
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break;
		res[index] = (char *)malloc(sizeof(char) * (strlen(s, c, i) + 1));
		while (s[i] && s[i] !=c )
			res[index][j++] = s[i]++;
		res[index++][j] = '\0';
	}
	res[index] = '\0';
	return (res);
}
