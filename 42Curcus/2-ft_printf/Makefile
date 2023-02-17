# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atatar <atatar@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 20:48:52 by atatar            #+#    #+#              #
#    Updated: 2022/10/31 13:49:25 by atatar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_p.c \
	   ft_printf.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_strlen.c \
	   ft_u.c \
	   ft_x.c	
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

re : fclean all
