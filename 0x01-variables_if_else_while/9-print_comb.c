#include <stdio.h>

/**
  * main - prints single digits followed by a comma
  *
  * Return: 0
  */

int main(void)
{
	int er;

	for (er = 48; er <= 57; er++)
	{
		putchar(er);
		if (er != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
