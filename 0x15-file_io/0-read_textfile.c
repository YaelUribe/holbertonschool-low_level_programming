#include "holberton.h"
/**
*read_textfile - function to read a text file
*@filename: the file to read
*@letters: amount of letters to read and print
*Return: the actual number of letters or 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*creating the file*/
	char *bffr; /*to separate the memory of letters*/
	int length;/*to use read with bffr and letters*/

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);/*opening our file*/
	if (fd == -1)
	{
		return (0);
	}
	bffr = malloc(sizeof(char) * letters);/*assign a buffer*/
	if (bffr == NULL)
		return (0);
	length = read(fd, bffr, letters); /*file, bffer, letters*/
	if (length == -1)
		return (0);
	if (write(STDOUT_FILENO, bffr, length) != length)
		return (0);
	close(fd);
	free(bffr);
	return (length);
}
