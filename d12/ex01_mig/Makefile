NAME = ft_cat

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: clean all

$(NAME): main.c tools.h
	gcc -Wall -Wextra -Werror -o $(NAME) $<
