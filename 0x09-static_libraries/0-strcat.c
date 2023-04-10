#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @src: firat string
 * @dest: the initial string where src is added
 * Return: 1
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

