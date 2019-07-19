
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					char	*ft_strdup(char *src);
				
int main()
{
char* str;
char* res;
str = "asdf", res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);
str = "", res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);
str = "hello world!", res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);



return 0;
}
