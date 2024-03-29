#include "main.h"
#include <stdlib.h>
/**
 * create_file - creating files
 * @filename: The name of the file to be created
 * @text_content: content of the file
 * Return: 1 or -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;
	int n = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, n);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
