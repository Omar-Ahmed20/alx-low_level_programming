#include "main.h"
/**
 *main - prints string
 *Return:0 when success else 1
 */
int main(void)
{
	char string[] = "_putchar";

	for (int i = 0; i < 8; i++)
		_putchar(string[i]);
	_putchar('\n');
	return (0);
}
