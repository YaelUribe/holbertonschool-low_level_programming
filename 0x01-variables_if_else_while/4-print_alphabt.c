#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphat;

	for (alphat = 'a'; alphat <= 'z'; alphat++)
	{
		if ((alphat == 'q') || (alphat == 'e'))
			continue;
		else
			putchar(alphat);
	}
	putchar('\n');
	return (0);
}
