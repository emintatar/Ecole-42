/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:03:40 by atatar            #+#    #+#             */
/*   Updated: 2022/08/03 09:03:43 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (a < power)
	{
		b *= nb;
		a++;
	}
	return (b);
}
