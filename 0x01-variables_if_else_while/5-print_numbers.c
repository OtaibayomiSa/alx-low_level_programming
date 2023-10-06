#include <stdio.h>

/**
 * main - printing decimals from 0-9
 *
 * Return: 0
 */

int main(void)
{
	char er;

	for (er = '0'; er <= '9'; er++)
	{
		putchar(er);
	}
	putchar(10);
	return (0);
}
