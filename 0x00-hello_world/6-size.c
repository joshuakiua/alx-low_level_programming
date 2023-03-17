#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of char: %i byte(s) \n", (unsigned long) sizeof(c));
	printf("Size of int: %i byte(s) \n", (unsigned long) sizeof(i));
	printf("Size of long int: %i byte(s) \n", (unsigned long) sizeof(a));
	printf("Size of long long int: %i byte(s) \n", (unsigned long) sizeof(b));
	printf("Size of float: %i byte(s) \n", (unsigned long) sizeof(f));
	return (0);
}
