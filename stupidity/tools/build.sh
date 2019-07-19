#!/bin/sh


					echo building work/ex00/main
					gcc -Wall -Wextra -Werror stupidity.c work/ex00/ft_strdup.c work/ex00/main.c -o work/ex00/main
				
					echo building work/ex01/main
					gcc -Wall -Wextra -Werror stupidity.c work/ex01/ft_range.c work/ex01/main.c -o work/ex01/main
				
					echo building work/ex02/main
					gcc -Wall -Wextra -Werror stupidity.c work/ex02/ft_ultimate_range.c work/ex02/main.c -o work/ex02/main
				
					echo building work/ex03/main_basic
					gcc -Wall -Wextra -Werror stupidity.c work/ex03/ft_concat_params.c work/ex03/main_basic.c -o work/ex03/main_basic
				
					echo building work/ex03/main_short
					gcc -Wall -Wextra -Werror stupidity.c work/ex03/ft_concat_params.c work/ex03/main_short.c -o work/ex03/main_short
				
					echo building work/ex03/main_empty
					gcc -Wall -Wextra -Werror stupidity.c work/ex03/ft_concat_params.c work/ex03/main_empty.c -o work/ex03/main_empty
				
					echo building work/ex04/main_basic
					gcc -Wall -Wextra -Werror stupidity.c work/ex04/ft_split_whitespaces.c work/ex04/main_basic.c -o work/ex04/main_basic
				
					echo building work/ex04/main_junk
					gcc -Wall -Wextra -Werror stupidity.c work/ex04/ft_split_whitespaces.c work/ex04/main_junk.c -o work/ex04/main_junk
				
					echo building work/ex04/main_less
					gcc -Wall -Wextra -Werror stupidity.c work/ex04/ft_split_whitespaces.c work/ex04/main_less.c -o work/ex04/main_less
				