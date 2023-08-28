#include "main.h"

/**
 * _strstr - find word in string
 * @haystack: string to search in
 * @needle: trget string
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int k = 0;
	int c = 0;
	int j = 0;
	int flag = 0;
	int start = 0;

	while (needle[k] != '\0')
		k++;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			start = i;
			c = i;
			j = 0;
			while (needle[j] != '\0')
			{
				if (needle[j] != haystack[c])
				{
					flag = 1;
					break;
				}
				j++;
				c++;
			}
		}
		i++;
	}
	if (flag == 0 || (c - start) == k)
		return (&haystack[start]);
	else
		return ('\0');

}
