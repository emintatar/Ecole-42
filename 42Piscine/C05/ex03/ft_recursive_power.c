/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:04:02 by atatar            #+#    #+#             */
/*   Updated: 2022/08/03 09:06:07 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
