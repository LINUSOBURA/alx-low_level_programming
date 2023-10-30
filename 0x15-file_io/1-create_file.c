#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - function to create a file
 * @filename: name of the file to be created
 * @text_content: Null terminated string to write to file
 * Return: 1 success -1 on failure
 * Code by Linus Obura
 */
int create_file(const char *filename, char *text_content)
{
	int file_name;
	ssize_t content_length, bytes_written;
	
	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, 0_CREAT | 0_WRONLY
			| 0_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, content_length);
		
		if (bytes_written != content_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	
	close(file_descriptor);
	return (1);
}
