#include "main.h"
/**
 * positive_or_negative - check if positive or negative
 * @i: - checks positive
 * return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
