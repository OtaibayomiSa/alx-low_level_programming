#include <stdio.h>

/**
 * main - printing the alphabet in lowercase except e and q
 *
 * Return: 0
 */

int main(void)
{
	char er;

	for (er = 97; er <= 122; er++)
	{
		if (er != 'e' && er != 'q')
		{
			putchar(er);
		}
	}
	putchar(10);
	return (0);
}
