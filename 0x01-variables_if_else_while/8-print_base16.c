#include <stdio.h>
/**
 *main - Entry point
 *Description: print nubers to base 16
 *Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57;)
	{
		putchar(n);
		n++;
	}
	for (m = 97; m <= 102;)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
