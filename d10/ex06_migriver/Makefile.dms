NAME = do-op

.PHONY: all
all: $(NAME)

$(NAME): main.c tools.h putnbr.h atoi.h doop_opps.h doop.h
	gcc -Wall -Wextra -Werror -Iincludes -o $(NAME) $<

.PHONY: clean
clean:
	rm -f $(NAME)

.PHONY: re
re: clean all

.PHONY: test
test: all
	./test.sh
