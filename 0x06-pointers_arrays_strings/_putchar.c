#include <unistd.h>
#include "main.h"

/**
 * _putchar - a function that writes the character c to stdout
 * @c: the character to be writen
 * Retun: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
