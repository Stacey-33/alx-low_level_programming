#include <stdio.h>
/**
 * main - A program that rpints all possible combinations of single-digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++;)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
