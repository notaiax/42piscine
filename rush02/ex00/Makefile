# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfan <jfan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 17:37:26 by jfan              #+#    #+#              #
#    Updated: 2019/07/28 19:57:22 by jroberts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addsuffix .c, $(addprefix srcs/, rush00 rush01 rush02 rush03 rush04 \
	   ft_putchar ft_atoi))
NODIR = $(SRCS:srcs/%=%)
NAMES = $(NODIR:%.c=%)

FLAGS = -Wall -Werror -Wextra

all: $(NAMES)

$(NAMES): $(SRCS)
	gcc $(FLAGS) srcs/rush00.c srcs/ft_atoi.c srcs/ft_putchar.c -o rush00
	gcc $(FLAGS) srcs/rush01.c srcs/ft_atoi.c srcs/ft_putchar.c -o rush01
	gcc $(FLAGS) srcs/rush02.c srcs/ft_atoi.c srcs/ft_putchar.c -o rush02
	gcc $(FLAGS) srcs/rush03.c srcs/ft_atoi.c srcs/ft_putchar.c -o rush03
	gcc $(FLAGS) srcs/rush04.c srcs/ft_atoi.c srcs/ft_putchar.c -o rush04

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAMES)

re: fclean all

.PHONY: all clean fclean re
