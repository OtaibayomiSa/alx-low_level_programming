#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		char a;

		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
	_putchar(10);
	}
}
