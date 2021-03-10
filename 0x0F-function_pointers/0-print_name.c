#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@name: pointer to a string
 *@f: Pointer
 *Return: Always 0 when success
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
