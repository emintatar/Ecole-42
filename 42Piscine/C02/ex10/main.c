#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a);
}

int	main(void)
{
	char a[] = "emintatar";
	char b[] = "";

	printf(" %d%s\n", ft_strlcpy(b, a, 4),b);
	return (0);
}
