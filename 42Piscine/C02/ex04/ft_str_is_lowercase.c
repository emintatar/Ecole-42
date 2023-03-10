/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:28:52 by atatar            #+#    #+#             */
/*   Updated: 2022/07/27 14:15:09 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if (!(*str >= 'a' && *str <= 'z'))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
}
