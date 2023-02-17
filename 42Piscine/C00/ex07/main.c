#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

int	main(void)
{
	printf("\nIt should print '42' : \n");
	ft_putnbr(42);
	printf("\nIt should print '-2147483648' : \n");
	ft_putnbr(-2147483648);
	printf("\nIt should print '-4242' : \n");
	ft_putnbr(-4242);
	printf("\n");
	return(0);
}
