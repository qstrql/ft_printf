# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjouot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 16:46:46 by mjouot            #+#    #+#              #
#    Updated: 2022/10/07 21:07:40 by mjouot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS = ft_check_str.c \
	   ft_printf.c \
	   ft_utilities.c \
	   ft_printnbr.c \
	   ft_printnbr_base.c \

CC = gcc
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror


$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

