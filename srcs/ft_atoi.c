#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	neg;

	i = -1;
	res = 0;
	neg = 1;
	if (!nptr)
		return (0);
	if (nptr[++i] == '-')
		neg *= -1;
	while (nptr[++i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (0);
		res = res * 10 + (nptr[i] - 48) * neg;
		if (res % 10 < nptr[i] * neg || res % 10 > nptr[i] * neg)
			return (0);
	}
	return (res);
}
