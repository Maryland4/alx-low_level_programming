#include "function_pointers.h"
#include "stdio.h"

/**
 * print_name - prints a name
 * @name: character to be printed
 * @f: pointer to the printing function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
