#include <stdio.h>

/**
 * main - printing the alphabet in lower case using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char er;

	for (er = 97; er <= 122; er++)
	{
		putchar(er);
	}
	putchar(10);
	return (0);
}
