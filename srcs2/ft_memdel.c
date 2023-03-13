#include "libft.h"

void	ft_memdel(void **ap)
{
	while (*ap)
	{
		free(*ap);
		*ap++;
	}
	ap = NULL;
}
