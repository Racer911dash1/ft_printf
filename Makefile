# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 16:57:19 by dbakker           #+#    #+#              #
#    Updated: 2025/05/16 12:59:28 by dbakker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_helper_functions.c \
		ft_printf.c \
		ft_putbase.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putunbr.c

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re