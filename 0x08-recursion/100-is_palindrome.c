#include "main.h"
/**
 *checker - Function to check pandominal
 *@s : array
 *@j: int
 *@len: int
 *Return: int
 */
int checker(char s, int j, int len)
{
	if (s[j] != s[len])
		return (0);
	if (s[j] == s[len])
		checker(s, j + 1, len - 1);
	return (1);
}
/**
 *is_palindrome - Function to check palindrome
 *@s: array
 *Return: int
 */
int is_palindrome(char *s)
{
	int i, e;

	i = e = 0;
	if (*s != '\0')
		n = 1 + is_palindrome(s + 1);
	return (checker(s, i, e));
}
