#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
		ft_putchar('P');
}

int	main(void)
{
	printf("It should print 'P' : \n");
	ft_is_negative(12);
	printf("\nIt should print 'P' : \n");
	ft_is_negative(0);
	printf("\nIt should print 'N' : \n");
	ft_is_negative(-32);
	printf("\n");
	return(0);
}
