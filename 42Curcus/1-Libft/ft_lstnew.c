/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:59:47 by atatar            #+#    #+#             */
/*   Updated: 2022/10/23 13:09:49 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rt;

	rt = malloc(sizeof(t_list));
	if (!rt)
		return (0);
	rt->content = content;
	rt->next = NULL;
	return (rt);
}
