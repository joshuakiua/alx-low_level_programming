#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description - program that prints the lowercase in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int l = 122;

	while (l >= 97)
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
