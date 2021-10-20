#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[11];
	short	i;

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = (-n);
	}
	while (n > 9)
	{
		buffer[i++] = (n % 10) + ((int)('0'));
		n = (n / 10);
	}
	buffer[i++] = n + ((int)('0'));
	while (i--)
		write(fd, &buffer[i], 1);
}
