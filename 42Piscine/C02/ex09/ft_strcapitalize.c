/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:56:32 by atatar            #+#    #+#             */
/*   Updated: 2022/07/27 15:56:33 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
