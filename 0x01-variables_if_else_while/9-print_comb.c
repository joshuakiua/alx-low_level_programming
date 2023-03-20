#include <stdio.h>
/**
 * main - Entry point
 * Description - prints 0-9 using putchar and separated by a comma + space
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
