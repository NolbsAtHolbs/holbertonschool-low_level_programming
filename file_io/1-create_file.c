#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of the file, return -1 on NULL
  * @text_content: NULL terminated string to write to the file. Create empty file if NULL
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int new_file, len, wr_stat;

	if (filename == NULL)
	{
		return (-1);
	}
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	
	if (new_file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
	{
		;
	}
	wr_stat = write(new_file, text_content, len);
	
	if (close(new_file) == -1)
	{
		return (-1);
	}
	return (wr_stat == -1 ? -1 : 1);
}
