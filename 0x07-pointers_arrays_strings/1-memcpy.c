#include "main.h"
/**
 * _memcpy - Copy memory area
 * @dest: memory area
 * @src: Memory area
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}

