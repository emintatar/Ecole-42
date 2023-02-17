#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!(*str >= 'a' && *str <= 'z'))
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

	a = "asdaasd";
	b = "asfjah2141";

	printf("1 : %d", ft_str_is_lowercase(a));
	printf("\n");
	printf("0 : %d", ft_str_is_lowercase(b));
}
