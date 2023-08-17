#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int _putchar(char c);
	int c;

	for (c = '0'; c <= '9';)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
