#include "libft.h"

void	bzero(void *s, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		s[i] = '\0';
}
