#include "holberton.h"
#define SE STDERR_FILENO
/**
  * main - copy file
  * @argc: 2
  * @argv: file to copy, new file name
  *
  * Return: stuff
  */
int main(int argc, char *argv[])
{
	int file1, file2, fileread, filewrite, c1, c2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (file2 == -1)
	{
		dprintf(SE, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fileread > 0)
	{
		fileread = read(file1, buffer, 1024);
		if (fileread == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filewrite = write(file2, buffer, fileread);
		if (filewrite == -1)
		{
			dprintf(SE, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	c1 = close(file1);
	c2 = close(file2);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(SE, "Can't close fd -1\n");
		exit(100);
	}
	return (0);
}

