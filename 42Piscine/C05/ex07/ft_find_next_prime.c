/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:05:12 by atatar            #+#    #+#             */
/*   Updated: 2022/08/03 09:05:13 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	b;

	b = 2;
	while (b < nb)
	{
		if (nb % b == 0)
			return (0);
		b++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb < 2147483647 && !ft_find_prime(nb))
		nb++;
	return (nb);
}
