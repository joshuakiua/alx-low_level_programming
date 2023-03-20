#include <stdio.h>
/**
 * main - entry point
 * description - prints all the numbers to base 16 using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 97; a <=102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
