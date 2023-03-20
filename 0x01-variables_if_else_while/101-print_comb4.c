#include <stdio.h>
/**
 * main - entry point
 * description - prints all possible combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if (a < b  && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
