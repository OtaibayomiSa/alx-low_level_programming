#include <stdio.h>

/**
 * main - printing the alphabet in both upper and lower cases
 *
 * Return: 0
 */

int main(void)
{
		char er;

		for (er = 97; er <= 122; er++)
				putchar(er);
		for (er = 65; er <=90; er++)
				putchar(er);
		putchar(10);
		return (0);
}
