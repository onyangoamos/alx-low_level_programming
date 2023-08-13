#include <stdio.h>
/**
 *main - Entry point
 *Description: prints all possible pair of
 two digit numbers, without any repetition
 *Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99;)
	{
		for (j = 0; j <= 99;)
		{
			if (i < j && 1 != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				i++;
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				j++;
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
