#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch;
	char dh;

		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		for (dh = 'A'; dh <= 'Z'; dh++)
			putchar(dh);
		putchar('\n');
		return (0);
}
