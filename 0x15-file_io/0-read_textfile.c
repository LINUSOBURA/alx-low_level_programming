#include "main.h"
/**
 * read_textfile - function to read a text file and print it to the POSIX standard output
 * @filename: name of the file to be opened
 * @letters: letters in the file to be printed
 * Returns: the number of letters it could read and print
 * Code by Linus Obura
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (!file)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (!buffer)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);

	return (bytesRead);
}
