#include "libft.h"

int	intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	put;
	int	i;

	i = -1;
	res = (char *)malloc(sizeof(int) * (intlen(n) + 1));
	res[intlen(n)] = '\0';
	if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		n /= 10;
		put = n % 10;
		if (put < 0)
			put *= -1;
		res[++i] = put + 48;
	}
	return (res);
}
