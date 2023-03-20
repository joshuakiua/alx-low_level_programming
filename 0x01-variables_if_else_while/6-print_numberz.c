#include <stdio.h>
/**
 * main - entry point
 * Description - prints 0-9 using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
