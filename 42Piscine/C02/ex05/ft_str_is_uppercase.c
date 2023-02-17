/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:54:37 by atatar            #+#    #+#             */
/*   Updated: 2022/07/27 13:55:40 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
}