#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (a == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			a++;
		}
		else if (a > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			a = 0;
		else
			a++;
		i++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "jskfkj lksofkosf SFAGSAg ssfsgA";
	char b[] = "hjsfhj-hkg!hsfh";

	printf("%s\n", ft_strcapitalize(a));
	printf("\n");
	printf("%s", ft_strcapitalize(b));
}
