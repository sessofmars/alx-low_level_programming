#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to append
 *
 * Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length;

	if (filename == NULL)
		return (-1);

	length = 0;
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
