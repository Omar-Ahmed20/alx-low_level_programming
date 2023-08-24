#include "main.h"
#include <stdio.h>

/**
 * isprintable - check is the character is printable
 * @n: user charahter
 * Return: 1 or 0
 */
int isprintable(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * printASCII - print ascii values
 * @b: user input array
 * @start: start point
 * @end: end point
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprintable(ch))
			ch = 46;
		printf(("%c"), ch);
		i++;
	}
}
/**
 * printhexas - print hexadecimal values
 * @b: user input array
 * @start: start point
 * @end: end point
 */
void printhexas(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * print_buffer - print the buffer
 * @b: user input array
 * @size: size of the array
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		start = 0;
		while (start < size)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printhexas(b, start, end);
			printASCII(b, start, end);
			printf("\n");
			start += 10;
		}
	}
	else
		printf("\n");
}
