#include <stdio.h>
/**
 * main - entry point
 * description: prints all possible combination of two-digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{

	for (b = a + 1; b <= 99; b++)
	{
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(32);
	putchar((b / 10) + '0');
	putchar((b % 10) + '0');
	if (a == 98 && b == 99)
	continue;
	putchar(44);
	putchar(32);

	}
	}
	putchar('\n');
	return (0);
}
