#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints alphabets in lowercase and then in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
