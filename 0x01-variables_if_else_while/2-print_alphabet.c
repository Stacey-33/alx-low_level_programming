#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints alphabets in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
