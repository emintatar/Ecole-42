/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:58:18 by atatar            #+#    #+#             */
/*   Updated: 2022/10/23 13:15:08 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = 0;
	if (dst)
		dlen = ft_strlen(dst);
	if (size <= dlen)
		dlen = size;
	else
	{
		while (src[i] && i < size - dlen - 1)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = 0;
	}
	return (dlen + ft_strlen(src));
}
