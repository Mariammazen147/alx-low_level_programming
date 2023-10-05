#include <stdio.h>
/**
 * main
 *
 * Return: 
 */

int main(void)
{
	char x;
	for(x = 'a';x<='z';x++)
	{
		if(x=='e'||x=='q')
			continue;
		else
			putchar(x);
	}
	putchar('\n');
	return (0);
}
