#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: The function used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
