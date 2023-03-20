#include <stdio.h>
/**
 * main - Entry point
 * Description - program that prints alphabets in both lower and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int u = 65;
	int l = 97;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
