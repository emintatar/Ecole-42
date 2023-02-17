#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!(*str >= '0' && *str <= '9'))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
}
int main(void)
{
	char	*a;
	char	*b;

	a = "241254135";
	b = "12412aasfsa";

	printf("1: %d", ft_str_is_numeric(a));
	printf("\n");
	printf("0: %d", ft_str_is_numeric(b));
}
