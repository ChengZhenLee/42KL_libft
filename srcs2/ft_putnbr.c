#include "libft.h"

void	ft_putnbr(int n)
{
	int	put;

	if (n < 10 && n > -10)
	{
		if (n < 0)
			n *= -1;
		ft_putchar(n + 48);
		return ;
	}
	put = n % 10;
	if (put < 0)
		put *= -1;
	ft_putnbr(n / 10);
	ft_putchar(put + 48);
}
