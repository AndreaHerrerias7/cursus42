# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 13:46:20 by aherreri          #+#    #+#              #
#    Updated: 2025/01/19 19:13:40 by aherreri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

NAME = libftprintf.a
SRCS =	ft_printf.c \

OBJS = $(SRCS:.c=.o)

	
all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
