/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:04:28 by atatar            #+#    #+#             */
/*   Updated: 2022/08/03 09:06:47 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	if (nb == 1)
		return (1);
	else if (nb > 1)
	{
		a = 0;
		while (a < nb && a < 46341)
		{
			if (a * a == nb)
				return (a);
			a++;
		}
	}
	return (0);
}
