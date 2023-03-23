#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphebet 10 times
 * return: 1 (success)
 * errno: -1 when fail
 */
void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{
		int c;

		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
