/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atatar <atatar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:49:09 by atatar            #+#    #+#             */
/*   Updated: 2022/10/31 14:17:01 by atatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_u(unsigned int u);
int		ft_x(unsigned int x, int b);
int		ft_p(unsigned long p);
size_t	ft_strlen(const char *s);

#endif