#include <unistd.h>
/**
 * _putchar - putchar writes the character c to stdout
 * @c - the printed character
 * Return: - 1 (successs)
 * error: return -1 and set errno appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

