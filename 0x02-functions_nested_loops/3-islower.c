#include "main.h"
/**
 * _islower - checks if a character is lower
 * @c: - Character to be checked
 * Return: 1 if char is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
