
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					char	**ft_split_whitespaces(char *str);
				
int main()
{
char** res;
for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");
for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");



return 0;
}
