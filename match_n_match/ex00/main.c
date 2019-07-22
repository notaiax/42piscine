#include <stdio.h>

int	match(char *s1, char *s2);
void try(char *s1, char *s2, int want);

int main()
{
	try("main.c", "*.c", 1);
	try("my_main.c", "my_*.c", 1);
	try("main.c", "my_*.c", 0);
	try("Hello!", "*!", 1);
	try("Hello!", "**l*", 1);
	try("Hello", "ello", 0);
	try("Hello", "*ello*", 1);
	try("Hello!", "Hello*", 1);
	try("Hello!", "Hello!", 1);
	try("Hello!", "He**o!", 1);
	try("Hell!", "He**o!", 0);
	try("Hello!", "", 0);
	try("", "*", 1);
	try("", "", 1);
	try("Hello!", "*", 1);
	try("a", "*", 1);
	try("abcebdfb", "abc*b*b", 1);
	try("abcabcccaaa bab", "*abc**ba", 0);
	try("abcabcccaaa bab", "abc***b", 1);
	try("mmme", "*me", 1);
	try("mememe", "*me", 1);
	try("mecdmekkkgfcdmei", "*cd*me*gf*cd*mei", 1);
}

void try(char *s1, char *s2, int want)
{
	int got = match(s1, s2);
	printf("[%s] %s == %s -> got: %d; want: %d\n", ((got == want) ? "PASS" : "FAIL"), s1, s2, got, want);
	return ;
}
