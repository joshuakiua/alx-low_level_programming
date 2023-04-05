#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: given string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int lenstr;

	lenstr = 0;
	if (*s)
	{
		lenstr++;
		lenstr += _strlen_recursion(s + 1);
	}
	return (lenstr);
}
