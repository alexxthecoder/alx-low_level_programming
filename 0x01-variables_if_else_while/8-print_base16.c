#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int ch;
	char dh;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);
	for (dh = 'a'; dh <= 'f'; dh++)
		putchar(dh);

	putchar('\n');
	return (0);
}
