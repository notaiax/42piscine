NAME = bsq

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -f *.o libft.a libbsq.a

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: clean all

libft.a: libs/ft_string.c libs/ft_atoi.c
	gcc -Wall -Wextra -Werror -Iheaders -c $^
	ar rc $@ $(patsubst libs/%.c,%.o,$^)
	ranlib $@

libbsq.a: libs/bsq_helpers.c libs/bsq_input.c libs/bsq_parse.c libs/bsq_find.c libs/bsq_print_square.c
	gcc -Wall -Wextra -Werror -Iheaders -c $^
	ar rc $@ $(patsubst libs/%.c,%.o,$^)
	ranlib $@

$(NAME): main.c headers/bsq.h libft.a libbsq.a
	gcc -Wall -Wextra -Werror -L. -lft -lbsq -Iheaders -o $(NAME) $<