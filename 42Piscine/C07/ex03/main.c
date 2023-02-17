#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_totallen(char **strings, char *sep, int size)
{
	int	total;
	int	i;
	int	seplen;

	seplen = ft_strlen(sep);
	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strings[i]);
		total += seplen;
		i++;
	}
	total -= seplen;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_totallen(strs, sep, size);
	d = (char *)malloc((sizeof(char) * len + 1));
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	*d = '\0';
	d = d - len;
	return (d);
}

int main()
{
	char *a = {"emin", "tatar"};

	printf("%s", ft_strjoin(2, a, "&"));
}
