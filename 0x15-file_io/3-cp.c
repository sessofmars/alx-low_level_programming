#include "main.h"

/**
 * exit97 - checks the correct number of arguments
 * @argc: argument counts
 *
 * Return: void
 */

void exit97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * exit98 - checks if file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @file_from: file descriptor of file_from
 * @file_to: file descriptor of file_to
 *
 * Return: void
 */
void exit98(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}
}

/**
 * exit99 - checks if file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @file_from: file descriptor of file_from
 * @file_to: file descriptor of file_to
 *
 * Return: void
 */
void exit99(ssize_t check, char *file, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
}

/**
 * exit100 - checks if file descriptors was closed
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void exit100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_to, close_from;
	ssize_t read_file, write_file;
	char buffer[1024];
	mode_t file_perm;

	exit97(argc);
	file_from = open(argv[1], O_RDONLY);
	exit98((ssize_t)file_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	exit99((ssize_t)file_to, argv[2], file_from, -1);
	read_file = 1024;

	while (read_file == 1024)
	{
		read_file = read(file_from, buffer, 1024);
		exit98(read_file, argv[1], file_from, file_to);
		write_file = write(file_to, buffer, read_file);
		if (write_file != read_file)
			write_file = -1;
		exit99(write_file, argv[2], file_from, file_to);
	}

	close_to = close(file_to);
	close_from = close(file_from);
	exit100(close_to, file_to);
	exit100(close_from, file_from);

	return (0);
}
