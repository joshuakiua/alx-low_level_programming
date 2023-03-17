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

	printf("Size of char: %u byte(s)\n", (unsigned int) sizeof(c));
	printf("Size of int: %u  byte(s)\n", (unsigned int) sizeof(i));
	printf("Size of long int: %u byte(s)\n", (unsigned int) sizeof(a));
	printf("Size of long long int: %u byte(s) \n", (unsigned int) sizeof(b));
	printf("Size of float: %u byte(s) \n", (unsigned int) sizeof(f));
	return (0);
}
