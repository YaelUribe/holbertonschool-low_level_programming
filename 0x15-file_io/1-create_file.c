#include "holberton.h"
/**
 *create_file - function to create a file
 *@filename: Name of the file to create
 *@text_content: Null terminated string to write to the file
 *Return: 1 on success -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int length;
	int fides;
	char *bfr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fides = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fides == -1)
		return (-1);
	length = _stlength(text_content);
	bfr = malloc(sizeof(char) * length);
	if (bfr == NULL)
		return (-1);
	write(fides, text_content, length);
	close(fides);
	free(bfr);
	return (1);
}

/**
 * _stlength - function to determine length of a string
 *@d: given string
 *Return: string length
 */
int _stlength(char *d)
{
	int i;

	for (i = 0; d[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
