#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	put;

	if (n < 10 && n > - 10)
	{
		if (n < 0)
			n *= -1;
		ft_putchar_fd(n + 48, fd);
		return ;
	}
	put = n % 10;
	if (put < 0)
		put *= -1;
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(put + 48, fd);
}
