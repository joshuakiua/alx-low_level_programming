#include "main.h"
/**
 * print_alphabet - prnts lowercase alphabets
 * description: function that prints the alphabet in lowercase and new line
 * return: Always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
