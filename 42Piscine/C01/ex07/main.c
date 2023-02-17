#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = 0;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}
}

int    main(void)
{
	int	i;
	int	a[] = {1,2,3,4,5};

	ft_rev_int_tab(a,5);

	i = 0;
	while(i <= 4)
	{
		printf("%d",a[i]);
		if (i != 4)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
