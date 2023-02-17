#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while(i < ac)
	    {
			j =  0;
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
