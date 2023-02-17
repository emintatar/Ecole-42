#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char *text;

	text = "emintatar";
	printf("'9' : %d\n", ft_strlen(text));
	return 0;
}
