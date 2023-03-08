#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*temp;
	size_t	i;

	i = -1;
	temp = malloc(n);
	if (!dest || !src)
		return ;
	while (++i < n)
	{
		temp[i] = src[i];
		dest[i] = tem[i];
	}
}
