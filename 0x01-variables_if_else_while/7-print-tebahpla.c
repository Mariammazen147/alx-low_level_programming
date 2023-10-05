#include <stdio.h>

/**
 * main - prints the lowercase alpabet in reverse followed by a newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');

	return (0);
}
