/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:04:27 by atatar            #+#    #+#             */
/*   Updated: 2022/08/08 18:33:55 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*x;

	if (min >= max)
	{
		return (x = NULL);
	}
	range = max - min;
	x = (int *)malloc(range * sizeof(int) + 1);
	if (!x)
		return (0);
	i = 0;
	while (min < max)
	{
		x[i] = min ;
		min++;
		i++;
	}
	return (x);
}
