#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str != '\0')
		{
			if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	char *a;
	char *b;

	a = "asdasd";
	b = "asdasd12";

	printf("1 : %d", ft_str_is_alpha(a));
	printf("\n");
	printf("0 : %d", ft_str_is_alpha(b));
}
