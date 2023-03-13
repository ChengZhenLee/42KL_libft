#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (!res)
		return (NULL);
	else
	{
		*res = 0;
		return (res);
	}
}
