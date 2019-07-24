# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaura-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 20:31:24 by afaura-v          #+#    #+#              #
#    Updated: 2019/07/23 21:36:15 by afaura-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FILES_C = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
FILES_O =  ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -Iincludes -c $(FILES_C)
	ar rc $(NAME) $(FILES_O)
clean:
	rm -f $(FILES_O)
fclean: clean
	rm -f $(NAME)
re: fclean all
