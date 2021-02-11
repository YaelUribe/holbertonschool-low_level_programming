#include "holberton.h"
/**
 *_abs - absolute value
 *
 *@r: values
 *
 *Return: Always 0 (success)
 */
int _abs(int r)
{
	if (r > 0)
	{
	return (r);
	}
	else if (r < 0)
	{
	return (r * -1);
	 }
	else
	{
		return (0);
	}
}
