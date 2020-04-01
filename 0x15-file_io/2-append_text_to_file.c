#include "holberton.h"
/**
  * append_text_to_file - append text
  * @filename: filename to read
  * @text_content: info to append
  *
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, fileappend;
	int sl = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	while (text_content[sl] != '\0')
		sl++;
	buffer = malloc(sizeof(char) * sl);
	if (buffer == NULL)
		return (-1);
	fileappend = write(file, buffer, sl);
	free(buffer);
	if (fileappend == -1)
		return (-1);
	return (1);
}
