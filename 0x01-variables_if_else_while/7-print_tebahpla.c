#include <stdio.h>

/**
 * main - print the lower case alphabet from greatest to least
 *
 * Return: 0
 */

int main(void)
{
		int er;

		for (er = 122; er >= 97; er--)
		{
				putchar(er);
		}
		putchar(10);
		return (0);
}
