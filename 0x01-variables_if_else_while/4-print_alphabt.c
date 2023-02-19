#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program thta prints alphabets in lowercase followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
	{
		putchar(ch);
	}
	ch++;
	}
	putchar('\n');
	return (0);
}
