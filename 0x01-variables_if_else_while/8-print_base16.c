#include <stdio.h>

/**
  * main - printing hexadecimals
  *
  * Return: 0
  */

int main(void)
{
	int er;

	for (er = 0; er <= 15; er++)
	{
		if (er < 10)
			putchar(er + '0');
		else
			putchar(er - 10 + 'a');
	}
	putchar(10);
	return (0);
}
