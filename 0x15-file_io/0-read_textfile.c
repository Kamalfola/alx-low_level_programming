#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reading text files
 * @filename: file name
 * @letters: letters
 * Return: filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(char));
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r == -1 || w == -1)
	{
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
