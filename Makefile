# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 16:57:19 by dbakker           #+#    #+#              #
#    Updated: 2025/05/12 14:04:49 by dbakker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_helper_functions.c \
		ft_printchar.c \
		ft_printint.c

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
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re