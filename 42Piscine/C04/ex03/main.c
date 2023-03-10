#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	t;
	int	a;

	t = 1;
	i = 0;
	a = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			t *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		a = a * 10 + str[i] - 48;
		i++;
	}
	return (t * a);
}

int	main(void)
{
	char a[] = "  +---++--123asf123";
	char b[] = "---+--+1234ab567";

	printf("%d\n",ft_atoi(a));
	printf("%d\n",ft_atoi(b));
	return (0);
}
