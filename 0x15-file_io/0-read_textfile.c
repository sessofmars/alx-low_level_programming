#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: pointer to file to be read
 * @letters: number of letters to be read and print
 *
 * Return: actual number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op_f, rd_f, wr_f;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	op_f = open(filename, O_RDONLY);
	rd_f = read(op_f, buff, letters);
	wr_f = write(STDOUT_FILENO, buff, rd_f);

	if (op_f == -1 || rd_f == -1 || wr_f == -1 || rd_f != wr_f)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op_f);

	return (wr_f);
}
