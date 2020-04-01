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

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	while (text_content[sl] != '\0')
		sl++;
	fileappend = write(file, text_content, sl);
	if (fileappend == -1)
		return (-1);
	close(file);
	return (1);
}
