/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:23:29 by atatar            #+#    #+#             */
/*   Updated: 2022/07/26 09:24:29 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (!(b == 0))
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int div;
	int mod;
	int *div_;
	int *mod_;

	div_  = &div;
	mod_  = &mod;
	ft_div_mod(25, 2, div_, mod_);
	printf("%d, %d\n",div,mod);
	return(0);
}
