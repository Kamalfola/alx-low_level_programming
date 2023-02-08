#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appending textt to file
 * @filename: the name of the file
 * @text_content: content of the text
 * Return: 1 else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, n = 0;

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}
		o = open(filename, O_WRONLY | O_APPEND);
		w = write(o, text_content, n);
	
	if (filename == NULL)
	{
		return (-1);
	}

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
