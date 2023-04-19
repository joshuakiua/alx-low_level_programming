#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funtion that prints a name
 * @name: name of a person
 * @f: the function pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

