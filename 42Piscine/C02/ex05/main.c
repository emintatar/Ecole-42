#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
}

int main()
{
	char	*a;
	char	*b;

	a = "JSKFJKSAJKF";
	b = "SFıjdsfkj24";

	printf("1 : %d", ft_str_is_uppercase(a));
	printf("\n");
	printf("0 : %d", ft_str_is_uppercase(b));
}
