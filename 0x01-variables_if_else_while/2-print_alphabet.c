#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int al = 97;

	while (al < 123)
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
