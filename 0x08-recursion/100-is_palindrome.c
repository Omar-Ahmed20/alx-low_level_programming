#include "main.h"


/**
 * check - check if the string is palindrome or not
 * @s: string to be checked
 * @start: start point int the string
 * @end: ending point to string
 * Return: 1 if palindrome 0 if not
 */
int check(char *s, int start, int end)
{
	if (*s == '\0' || start < 0 || end < 0)
		return (0);
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (check(s, start + 1, end - 1));
	return (0);
}
/**
 * len - get the length of the string
 * @s: string input
 * Return: count of letters in the string
 */
int len(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (0);
	count++;
	count += len(s + 1);
	return (count);
}
/**
 * is_palindrome - call check function and setup its parameter
 * @s: string to be checked
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end;

	end = len(s) - 1;
	if (check(s, start, end))
		return (1);
	else
		return (0);
}
