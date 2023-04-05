#include "main.h"

/**
 * factorial - function that returns the factorial of that number
 * @n: number for the factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
