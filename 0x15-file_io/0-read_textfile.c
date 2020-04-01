#include "holberton.h"
/**
  * read_textfile - read textfile
  * @filename: filename to read
  * @letters: number of letters to print
  *
  * Return: 0 if error.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, fileread, filewrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);
	fileread = read(file, buffer, letters);
	close(file);
	filewrite = write(STDOUT_FILENO, buffer, fileread);
	free(buffer);
	if (fileread == -1 || filewrite == -1)
		return (0);
	return (filewrite);
}
