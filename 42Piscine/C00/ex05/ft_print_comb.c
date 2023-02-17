/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:54:31 by atatar            #+#    #+#             */
/*   Updated: 2022/07/21 21:52:12 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7' )
	{
		y = x + 1;
		while (y <= '8' )
		{
			z = y + 1;
			while (z <= '9' )
			{
				ft_putchar(x, y, z);
				if (! (x == '7' && y == '8' && z == '9'))
				{
					write (1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
