#include "main.h"

/**
 * _strstr - find word in string
 * @haystack: string to search in
 * @needle: trget string
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *str1 = haystack;
		char *str2 = needle;

		while (*str1 == *str2 && *str2 != '\0')
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
