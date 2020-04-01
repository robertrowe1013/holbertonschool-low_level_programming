#include "holberton.h"
/**
  * create_file - create file
  * @filename: file name
  * @text_content: content for file
  *
  * Return: 1 on success, else -1
  */
int create_file(const char *filename, char *text_content)
{
	int file, sl, writefile;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[sl] != '\0')
			sl++;
	}
	writefile = write(file, text_content, sl);
	if (writefile == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
