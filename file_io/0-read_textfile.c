#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * read_textfile - reads a text file & prints it to the POSIX standard output
  * @filename: name of file to be read
  * @letters: number of characters to be printed
  * Return: the actual number of letters it could read and print, 0 if fail
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total, read_status;
	char buffer[BUFSIZE];

	if (filename == NULL)
	{
		return (0);
	}
	txt_file = open(filename, O_RDONLY);

	if (txt_file == -1)
	{
		return (0);
	}
	total = 0;
	read_status = 1;

	while (letters > BUFSIZE && read_status != 0)
	{
		read_status = read(txt_file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, read_status);
		total += read_status;
		letters -= BUFSIZE;
	}
	read_status = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_status);
	total += read_status;
	close(txt_file);
	return (total);
}
