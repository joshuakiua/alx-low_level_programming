#include "main.h"
/**
 * _memset - fill the memory with constant byte
 * @s: address to be filled with the constant byte
 * @b: constant byte
 * @n: bytes to be changed
 * Return: the changed array
 */
har *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
