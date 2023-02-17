/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:09:58 by atatar            #+#    #+#             */
/*   Updated: 2022/07/27 14:14:06 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	char	*a;
	char	*b;

	a = "jhasfuhas";
	b = "\7F";

	printf("1 : %d",ft_str_is_printable(a));
	printf("\n");
	printf("0 : %d", ft_str_is_printable(b));
	
}
