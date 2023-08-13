#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers of base 10
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9;)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
