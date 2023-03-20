#include <stdio.h>
/**
 * main - Entry point
 * description: prints all posible combination of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		for (a = 49; a <= 57; a++)
		{
			if (n < a && n != a)
			{
				putchar(n);
				putchar(a);
				if (n < 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
