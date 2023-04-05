#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that works same ways as puts for a pointer
 * @c: charcter to be printed
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
