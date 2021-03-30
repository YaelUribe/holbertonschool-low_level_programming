#include "holberton.h"

/**
 *append_text_to_file - function to append text to the end of a file.
 *@filename: Name of the file
 *@text_content: NULL terminated string to add at the end of a file.
 *Return: 1 if success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fides;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fides = open(filename, O_APPEND | O_RDWR);
	if (fides == -1)
	{
		if (errno == ENOENT || errno == EROFS)
		{
			return (-1);
		}
	}
	if (write(fides, text_content, _stlength(text_content)) == -1)
		return (-1);
	close(fides);

	return (1);
}
/**
 *_stlength - function to determine the length of a string
 *@d: Given string
 *Return: size of given string
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
